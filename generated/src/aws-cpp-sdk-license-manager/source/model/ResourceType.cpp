/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t EC2_INSTANCE_HASH = ConstExprHashingUtils::HashString("EC2_INSTANCE");
        static constexpr uint32_t EC2_HOST_HASH = ConstExprHashingUtils::HashString("EC2_HOST");
        static constexpr uint32_t EC2_AMI_HASH = ConstExprHashingUtils::HashString("EC2_AMI");
        static constexpr uint32_t RDS_HASH = ConstExprHashingUtils::HashString("RDS");
        static constexpr uint32_t SYSTEMS_MANAGER_MANAGED_INSTANCE_HASH = ConstExprHashingUtils::HashString("SYSTEMS_MANAGER_MANAGED_INSTANCE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_HASH)
          {
            return ResourceType::EC2_INSTANCE;
          }
          else if (hashCode == EC2_HOST_HASH)
          {
            return ResourceType::EC2_HOST;
          }
          else if (hashCode == EC2_AMI_HASH)
          {
            return ResourceType::EC2_AMI;
          }
          else if (hashCode == RDS_HASH)
          {
            return ResourceType::RDS;
          }
          else if (hashCode == SYSTEMS_MANAGER_MANAGED_INSTANCE_HASH)
          {
            return ResourceType::SYSTEMS_MANAGER_MANAGED_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::EC2_INSTANCE:
            return "EC2_INSTANCE";
          case ResourceType::EC2_HOST:
            return "EC2_HOST";
          case ResourceType::EC2_AMI:
            return "EC2_AMI";
          case ResourceType::RDS:
            return "RDS";
          case ResourceType::SYSTEMS_MANAGER_MANAGED_INSTANCE:
            return "SYSTEMS_MANAGER_MANAGED_INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
