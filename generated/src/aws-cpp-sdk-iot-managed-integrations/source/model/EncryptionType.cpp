/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/EncryptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace EncryptionTypeMapper
      {

        static const int MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION_HASH = HashingUtils::HashString("MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION");
        static const int CUSTOMER_KEY_ENCRYPTION_HASH = HashingUtils::HashString("CUSTOMER_KEY_ENCRYPTION");


        EncryptionType GetEncryptionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION_HASH)
          {
            return EncryptionType::MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION;
          }
          else if (hashCode == CUSTOMER_KEY_ENCRYPTION_HASH)
          {
            return EncryptionType::CUSTOMER_KEY_ENCRYPTION;
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
          case EncryptionType::MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION:
            return "MANAGED_INTEGRATIONS_DEFAULT_ENCRYPTION";
          case EncryptionType::CUSTOMER_KEY_ENCRYPTION:
            return "CUSTOMER_KEY_ENCRYPTION";
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
  } // namespace IoTManagedIntegrations
} // namespace Aws
