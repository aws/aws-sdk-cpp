/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/EncryptionAlgorithmSpec.h>
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
      namespace EncryptionAlgorithmSpecMapper
      {

        static const int SYMMETRIC_DEFAULT_HASH = HashingUtils::HashString("SYMMETRIC_DEFAULT");
        static const int RSAES_OAEP_SHA_1_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_1");
        static const int RSAES_OAEP_SHA_256_HASH = HashingUtils::HashString("RSAES_OAEP_SHA_256");


        EncryptionAlgorithmSpec GetEncryptionAlgorithmSpecForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYMMETRIC_DEFAULT_HASH)
          {
            return EncryptionAlgorithmSpec::SYMMETRIC_DEFAULT;
          }
          else if (hashCode == RSAES_OAEP_SHA_1_HASH)
          {
            return EncryptionAlgorithmSpec::RSAES_OAEP_SHA_1;
          }
          else if (hashCode == RSAES_OAEP_SHA_256_HASH)
          {
            return EncryptionAlgorithmSpec::RSAES_OAEP_SHA_256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionAlgorithmSpec>(hashCode);
          }

          return EncryptionAlgorithmSpec::NOT_SET;
        }

        Aws::String GetNameForEncryptionAlgorithmSpec(EncryptionAlgorithmSpec enumValue)
        {
          switch(enumValue)
          {
          case EncryptionAlgorithmSpec::SYMMETRIC_DEFAULT:
            return "SYMMETRIC_DEFAULT";
          case EncryptionAlgorithmSpec::RSAES_OAEP_SHA_1:
            return "RSAES_OAEP_SHA_1";
          case EncryptionAlgorithmSpec::RSAES_OAEP_SHA_256:
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

      } // namespace EncryptionAlgorithmSpecMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
