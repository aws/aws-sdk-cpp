/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/model/AlgorithmSpec.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace AlgorithmSpecMapper
      {

        static const int RSAES_PKCS1_V1_5_HASH = HashingUtils::HashString("RSAES_PKCS1_V1_5");
        static const int RSAES_OAEP_SHA_1_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_1");
        static const int RSAES_OAEP_SHA_256_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_256");


        AlgorithmSpec GetAlgorithmSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RSAES_PKCS1_V1_5_HASH)
          {
            return AlgorithmSpec::RSAES_PKCS1_V1_5;
          }
          else if (hashCode == RSAES_OAEP_SHA_1_HASH)
          {
            return AlgorithmSpec::RSAES_OAEP_SHA_1;
          }
          else if (hashCode == RSAES_OAEP_SHA_256_HASH)
          {
            return AlgorithmSpec::RSAES_OAEP_SHA_256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlgorithmSpec>(hashCode);
          }

          return AlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForAlgorithmSpec(AlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case AlgorithmSpec::RSAES_PKCS1_V1_5:
            return "RSAES_PKCS1_V1_5";
          case AlgorithmSpec::RSAES_OAEP_SHA_1:
            return "RSAES_OAEP_SHA_1";
          case AlgorithmSpec::RSAES_OAEP_SHA_256:
            return "RSAES_OAEP_SHA_256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
