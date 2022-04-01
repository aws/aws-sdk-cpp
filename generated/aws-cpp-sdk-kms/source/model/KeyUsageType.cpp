/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/KeyUsageType.h>
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
      namespace KeyUsageTypeMapper
      {

        static const int SIGN_VERIFY_HASH = HashingUtils::HashString("SIGN_VERIFY");
        static const int ENCRYPT_DECRYPT_HASH = HashingUtils::HashString("ENCRYPT_DECRYPT");


        KeyUsageType GetKeyUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIGN_VERIFY_HASH)
          {
            return KeyUsageType::SIGN_VERIFY;
          }
          else if (hashCode == ENCRYPT_DECRYPT_HASH)
          {
            return KeyUsageType::ENCRYPT_DECRYPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyUsageType>(hashCode);
          }

          return KeyUsageType::NOT_SET;
        }

        Aws::String GetNameForKeyUsageType(KeyUsageType enumValue)
        {
          switch(enumValue)
          {
          case KeyUsageType::SIGN_VERIFY:
            return "SIGN_VERIFY";
          case KeyUsageType::ENCRYPT_DECRYPT:
            return "ENCRYPT_DECRYPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyUsageTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
