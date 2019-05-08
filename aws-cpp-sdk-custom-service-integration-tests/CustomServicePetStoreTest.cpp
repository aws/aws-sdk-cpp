/*
  * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */
#include <aws/external/gtest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSignerProvider.h>
#include <aws/custom-service/PetStoreClient.h>
#include <aws/custom-service/model/CreatePetRequest.h>
#include <aws/custom-service/model/GetPetRequest.h>
#include <aws/custom-service/model/GetPetsRequest.h>

using namespace Aws::Auth;
using namespace Custom::PetStore;
using namespace Custom::PetStore::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "CustomServicePetStoreTest";

    // This custom AuthSignerProvider always returns NullSigner.
    class CustomAuthSignerProvider : public Aws::Auth::AWSAuthSignerProvider
    {
    public:
        CustomAuthSignerProvider() : m_defaultSigner(Aws::MakeShared<Aws::Client::AWSNullSigner>(ALLOCATION_TAG)) {}

        std::shared_ptr<Aws::Client::AWSAuthSigner> GetSigner(const Aws::String& signerName) const override
        {
            AWS_UNREFERENCED_PARAM(signerName);
            return m_defaultSigner;
        }

        void AddSigner(std::shared_ptr<Aws::Client::AWSAuthSigner>&)
        {
            // no-op
        }

    private:
        std::shared_ptr<Aws::Client::AWSAuthSigner> m_defaultSigner;
    };

    class CustomServicePetStoreTest : public ::testing::Test
    {
    public:
        PetStoreClient client;
    };

    // Test the PetStore specific operations, PetStore is an example provided by API Gateway:
    // https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-create-api-from-example-console.html
    // The resources of PetStore is constant and will not be changed even though we call CreatePet successfully:
    // [{ "id": 1, "type": "dog", "price": 249.99 },
    //  { "id": 2, "type": "cat", "price": 124.99 },
    //  { "id": 3, "type": "fish", "price": 0.99 }]
    TEST_F(CustomServicePetStoreTest, TestPetStoreOperations)
    {
        // Test CreatePetRequest
        CreatePetRequest createPetRequest;
        NewPet newPet;
        newPet.SetType(PetType::bird);
        newPet.SetPrice(9.99);
        createPetRequest.SetNewPet(newPet);
        auto createPetOutcome = client.CreatePet(createPetRequest);
        ASSERT_TRUE(createPetOutcome.IsSuccess());

        // Test GetPetRequest
        GetPetRequest getPetRequest;
        getPetRequest.SetPetId(1);

        auto getPetOutcome = client.GetPet(getPetRequest);
        ASSERT_TRUE(getPetOutcome.IsSuccess());
        ASSERT_EQ("dog", getPetOutcome.GetResult().GetPet().GetType());
        ASSERT_EQ(249.99, getPetOutcome.GetResult().GetPet().GetPrice());

        // Test GetPetsRequest
        GetPetsRequest getPetsRequest;
        auto getPetsOutcome = client.GetPets(getPetsRequest);

        ASSERT_TRUE(getPetsOutcome.IsSuccess());
        auto pets = getPetsOutcome.GetResult().GetPets();
        ASSERT_EQ(3u, pets.size());
        auto pet = pets[1];
        ASSERT_EQ(2 , pet.GetId());
        ASSERT_EQ("cat", pet.GetType());
        ASSERT_EQ(124.99, pet.GetPrice());
    }

    TEST_F(CustomServicePetStoreTest, TestCustomSignerProvider)
    {
        // GetPetsRequest doesn't need signer anyway, we just test the interface to make use of custom signer provider in class constructor here.
        std::shared_ptr<Aws::Auth::AWSAuthSignerProvider> customSignerProvider = Aws::MakeShared<CustomAuthSignerProvider>(ALLOCATION_TAG);
        auto clientWithCustomSigner = Aws::MakeShared<PetStoreClient>(ALLOCATION_TAG, customSignerProvider);

        GetPetsRequest getPetsRequest;
        auto getPetsOutcome = client.GetPets(getPetsRequest);

        ASSERT_TRUE(getPetsOutcome.IsSuccess());
        ASSERT_EQ(3u, getPetsOutcome.GetResult().GetPets().size());
    }
}
