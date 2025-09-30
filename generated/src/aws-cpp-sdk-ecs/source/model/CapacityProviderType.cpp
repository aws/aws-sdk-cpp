/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CapacityProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace CapacityProviderTypeMapper
      {

        static const int EC2_AUTOSCALING_HASH = HashingUtils::HashString("EC2_AUTOSCALING");
        static const int MANAGED_INSTANCES_HASH = HashingUtils::HashString("MANAGED_INSTANCES");
        static const int FARGATE_HASH = HashingUtils::HashString("FARGATE");
        static const int FARGATE_SPOT_HASH = HashingUtils::HashString("FARGATE_SPOT");


        CapacityProviderType GetCapacityProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_AUTOSCALING_HASH)
          {
            return CapacityProviderType::EC2_AUTOSCALING;
          }
          else if (hashCode == MANAGED_INSTANCES_HASH)
          {
            return CapacityProviderType::MANAGED_INSTANCES;
          }
          else if (hashCode == FARGATE_HASH)
          {
            return CapacityProviderType::FARGATE;
          }
          else if (hashCode == FARGATE_SPOT_HASH)
          {
            return CapacityProviderType::FARGATE_SPOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityProviderType>(hashCode);
          }

          return CapacityProviderType::NOT_SET;
        }

        Aws::String GetNameForCapacityProviderType(CapacityProviderType enumValue)
        {
          switch(enumValue)
          {
          case CapacityProviderType::NOT_SET:
            return {};
          case CapacityProviderType::EC2_AUTOSCALING:
            return "EC2_AUTOSCALING";
          case CapacityProviderType::MANAGED_INSTANCES:
            return "MANAGED_INSTANCES";
          case CapacityProviderType::FARGATE:
            return "FARGATE";
          case CapacityProviderType::FARGATE_SPOT:
            return "FARGATE_SPOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityProviderTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
