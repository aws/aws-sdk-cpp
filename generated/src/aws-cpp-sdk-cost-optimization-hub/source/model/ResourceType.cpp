/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int Ec2Instance_HASH = HashingUtils::HashString("Ec2Instance");
        static const int LambdaFunction_HASH = HashingUtils::HashString("LambdaFunction");
        static const int EbsVolume_HASH = HashingUtils::HashString("EbsVolume");
        static const int EcsService_HASH = HashingUtils::HashString("EcsService");
        static const int Ec2AutoScalingGroup_HASH = HashingUtils::HashString("Ec2AutoScalingGroup");
        static const int Ec2InstanceSavingsPlans_HASH = HashingUtils::HashString("Ec2InstanceSavingsPlans");
        static const int ComputeSavingsPlans_HASH = HashingUtils::HashString("ComputeSavingsPlans");
        static const int SageMakerSavingsPlans_HASH = HashingUtils::HashString("SageMakerSavingsPlans");
        static const int Ec2ReservedInstances_HASH = HashingUtils::HashString("Ec2ReservedInstances");
        static const int RdsReservedInstances_HASH = HashingUtils::HashString("RdsReservedInstances");
        static const int OpenSearchReservedInstances_HASH = HashingUtils::HashString("OpenSearchReservedInstances");
        static const int RedshiftReservedInstances_HASH = HashingUtils::HashString("RedshiftReservedInstances");
        static const int ElastiCacheReservedInstances_HASH = HashingUtils::HashString("ElastiCacheReservedInstances");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ec2Instance_HASH)
          {
            return ResourceType::Ec2Instance;
          }
          else if (hashCode == LambdaFunction_HASH)
          {
            return ResourceType::LambdaFunction;
          }
          else if (hashCode == EbsVolume_HASH)
          {
            return ResourceType::EbsVolume;
          }
          else if (hashCode == EcsService_HASH)
          {
            return ResourceType::EcsService;
          }
          else if (hashCode == Ec2AutoScalingGroup_HASH)
          {
            return ResourceType::Ec2AutoScalingGroup;
          }
          else if (hashCode == Ec2InstanceSavingsPlans_HASH)
          {
            return ResourceType::Ec2InstanceSavingsPlans;
          }
          else if (hashCode == ComputeSavingsPlans_HASH)
          {
            return ResourceType::ComputeSavingsPlans;
          }
          else if (hashCode == SageMakerSavingsPlans_HASH)
          {
            return ResourceType::SageMakerSavingsPlans;
          }
          else if (hashCode == Ec2ReservedInstances_HASH)
          {
            return ResourceType::Ec2ReservedInstances;
          }
          else if (hashCode == RdsReservedInstances_HASH)
          {
            return ResourceType::RdsReservedInstances;
          }
          else if (hashCode == OpenSearchReservedInstances_HASH)
          {
            return ResourceType::OpenSearchReservedInstances;
          }
          else if (hashCode == RedshiftReservedInstances_HASH)
          {
            return ResourceType::RedshiftReservedInstances;
          }
          else if (hashCode == ElastiCacheReservedInstances_HASH)
          {
            return ResourceType::ElastiCacheReservedInstances;
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
          case ResourceType::Ec2Instance:
            return "Ec2Instance";
          case ResourceType::LambdaFunction:
            return "LambdaFunction";
          case ResourceType::EbsVolume:
            return "EbsVolume";
          case ResourceType::EcsService:
            return "EcsService";
          case ResourceType::Ec2AutoScalingGroup:
            return "Ec2AutoScalingGroup";
          case ResourceType::Ec2InstanceSavingsPlans:
            return "Ec2InstanceSavingsPlans";
          case ResourceType::ComputeSavingsPlans:
            return "ComputeSavingsPlans";
          case ResourceType::SageMakerSavingsPlans:
            return "SageMakerSavingsPlans";
          case ResourceType::Ec2ReservedInstances:
            return "Ec2ReservedInstances";
          case ResourceType::RdsReservedInstances:
            return "RdsReservedInstances";
          case ResourceType::OpenSearchReservedInstances:
            return "OpenSearchReservedInstances";
          case ResourceType::RedshiftReservedInstances:
            return "RedshiftReservedInstances";
          case ResourceType::ElastiCacheReservedInstances:
            return "ElastiCacheReservedInstances";
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
  } // namespace CostOptimizationHub
} // namespace Aws
