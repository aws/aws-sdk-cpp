/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ResourceAttributeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHub
  {
    namespace Model
    {
      namespace ResourceAttributeTypeMapper
      {

        static const int IPV4_ADDRESS_HASH = HashingUtils::HashString("IPV4_ADDRESS");
        static const int IPV6_ADDRESS_HASH = HashingUtils::HashString("IPV6_ADDRESS");
        static const int MAC_ADDRESS_HASH = HashingUtils::HashString("MAC_ADDRESS");
        static const int FQDN_HASH = HashingUtils::HashString("FQDN");
        static const int VM_MANAGER_ID_HASH = HashingUtils::HashString("VM_MANAGER_ID");
        static const int VM_MANAGED_OBJECT_REFERENCE_HASH = HashingUtils::HashString("VM_MANAGED_OBJECT_REFERENCE");
        static const int VM_NAME_HASH = HashingUtils::HashString("VM_NAME");
        static const int VM_PATH_HASH = HashingUtils::HashString("VM_PATH");
        static const int BIOS_ID_HASH = HashingUtils::HashString("BIOS_ID");
        static const int MOTHERBOARD_SERIAL_NUMBER_HASH = HashingUtils::HashString("MOTHERBOARD_SERIAL_NUMBER");


        ResourceAttributeType GetResourceAttributeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_ADDRESS_HASH)
          {
            return ResourceAttributeType::IPV4_ADDRESS;
          }
          else if (hashCode == IPV6_ADDRESS_HASH)
          {
            return ResourceAttributeType::IPV6_ADDRESS;
          }
          else if (hashCode == MAC_ADDRESS_HASH)
          {
            return ResourceAttributeType::MAC_ADDRESS;
          }
          else if (hashCode == FQDN_HASH)
          {
            return ResourceAttributeType::FQDN;
          }
          else if (hashCode == VM_MANAGER_ID_HASH)
          {
            return ResourceAttributeType::VM_MANAGER_ID;
          }
          else if (hashCode == VM_MANAGED_OBJECT_REFERENCE_HASH)
          {
            return ResourceAttributeType::VM_MANAGED_OBJECT_REFERENCE;
          }
          else if (hashCode == VM_NAME_HASH)
          {
            return ResourceAttributeType::VM_NAME;
          }
          else if (hashCode == VM_PATH_HASH)
          {
            return ResourceAttributeType::VM_PATH;
          }
          else if (hashCode == BIOS_ID_HASH)
          {
            return ResourceAttributeType::BIOS_ID;
          }
          else if (hashCode == MOTHERBOARD_SERIAL_NUMBER_HASH)
          {
            return ResourceAttributeType::MOTHERBOARD_SERIAL_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceAttributeType>(hashCode);
          }

          return ResourceAttributeType::NOT_SET;
        }

        Aws::String GetNameForResourceAttributeType(ResourceAttributeType enumValue)
        {
          switch(enumValue)
          {
          case ResourceAttributeType::IPV4_ADDRESS:
            return "IPV4_ADDRESS";
          case ResourceAttributeType::IPV6_ADDRESS:
            return "IPV6_ADDRESS";
          case ResourceAttributeType::MAC_ADDRESS:
            return "MAC_ADDRESS";
          case ResourceAttributeType::FQDN:
            return "FQDN";
          case ResourceAttributeType::VM_MANAGER_ID:
            return "VM_MANAGER_ID";
          case ResourceAttributeType::VM_MANAGED_OBJECT_REFERENCE:
            return "VM_MANAGED_OBJECT_REFERENCE";
          case ResourceAttributeType::VM_NAME:
            return "VM_NAME";
          case ResourceAttributeType::VM_PATH:
            return "VM_PATH";
          case ResourceAttributeType::BIOS_ID:
            return "BIOS_ID";
          case ResourceAttributeType::MOTHERBOARD_SERIAL_NUMBER:
            return "MOTHERBOARD_SERIAL_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceAttributeTypeMapper
    } // namespace Model
  } // namespace MigrationHub
} // namespace Aws
