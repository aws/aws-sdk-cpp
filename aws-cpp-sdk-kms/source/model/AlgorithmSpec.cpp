/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace AlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
