/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/EncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace EncryptionTypeMapper
      {

        static const int CUSTOMER_MANAGED_KMS_KEY_HASH = HashingUtils::HashString("CUSTOMER_MANAGED_KMS_KEY");
        static const int AWS_OWNED_KMS_KEY_HASH = HashingUtils::HashString("AWS_OWNED_KMS_KEY");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_KMS_KEY_HASH)
          {
            return EncryptionType::CUSTOMER_MANAGED_KMS_KEY;
          }
          else if (hashCode == AWS_OWNED_KMS_KEY_HASH)
          {
            return EncryptionType::AWS_OWNED_KMS_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncryptionType>(hashCode);
          }

          return EncryptionType::NOT_SET;
        }

        Aws::String GetNameForEncryptionType(EncryptionType enumValue)
        {
          switch(enumValue)
          {
          case EncryptionType::NOT_SET:
            return {};
          case EncryptionType::CUSTOMER_MANAGED_KMS_KEY:
            return "CUSTOMER_MANAGED_KMS_KEY";
          case EncryptionType::AWS_OWNED_KMS_KEY:
            return "AWS_OWNED_KMS_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncryptionTypeMapper
    } // namespace Model
  } // namespace Keyspaces
} // namespace Aws
