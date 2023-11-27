/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int EKS_HASH = HashingUtils::HashString("EKS");
        static const int ECS_HASH = HashingUtils::HashString("ECS");
        static const int EC2_HASH = HashingUtils::HashString("EC2");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_HASH)
          {
            return ResourceType::EKS;
          }
          else if (hashCode == ECS_HASH)
          {
            return ResourceType::ECS;
          }
          else if (hashCode == EC2_HASH)
          {
            return ResourceType::EC2;
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
          case ResourceType::EKS:
            return "EKS";
          case ResourceType::ECS:
            return "ECS";
          case ResourceType::EC2:
            return "EC2";
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
  } // namespace GuardDuty
} // namespace Aws
