﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int Ec2Instance_HASH = HashingUtils::HashString("Ec2Instance");
        static const int AutoScalingGroup_HASH = HashingUtils::HashString("AutoScalingGroup");
        static const int EbsVolume_HASH = HashingUtils::HashString("EbsVolume");
        static const int LambdaFunction_HASH = HashingUtils::HashString("LambdaFunction");
        static const int NotApplicable_HASH = HashingUtils::HashString("NotApplicable");
        static const int EcsService_HASH = HashingUtils::HashString("EcsService");
        static const int License_HASH = HashingUtils::HashString("License");
        static const int RdsDBInstance_HASH = HashingUtils::HashString("RdsDBInstance");
        static const int AuroraDBClusterStorage_HASH = HashingUtils::HashString("AuroraDBClusterStorage");
        static const int Idle_HASH = HashingUtils::HashString("Idle");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ec2Instance_HASH)
          {
            return ResourceType::Ec2Instance;
          }
          else if (hashCode == AutoScalingGroup_HASH)
          {
            return ResourceType::AutoScalingGroup;
          }
          else if (hashCode == EbsVolume_HASH)
          {
            return ResourceType::EbsVolume;
          }
          else if (hashCode == LambdaFunction_HASH)
          {
            return ResourceType::LambdaFunction;
          }
          else if (hashCode == NotApplicable_HASH)
          {
            return ResourceType::NotApplicable;
          }
          else if (hashCode == EcsService_HASH)
          {
            return ResourceType::EcsService;
          }
          else if (hashCode == License_HASH)
          {
            return ResourceType::License;
          }
          else if (hashCode == RdsDBInstance_HASH)
          {
            return ResourceType::RdsDBInstance;
          }
          else if (hashCode == AuroraDBClusterStorage_HASH)
          {
            return ResourceType::AuroraDBClusterStorage;
          }
          else if (hashCode == Idle_HASH)
          {
            return ResourceType::Idle;
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
          case ResourceType::AutoScalingGroup:
            return "AutoScalingGroup";
          case ResourceType::EbsVolume:
            return "EbsVolume";
          case ResourceType::LambdaFunction:
            return "LambdaFunction";
          case ResourceType::NotApplicable:
            return "NotApplicable";
          case ResourceType::EcsService:
            return "EcsService";
          case ResourceType::License:
            return "License";
          case ResourceType::RdsDBInstance:
            return "RdsDBInstance";
          case ResourceType::AuroraDBClusterStorage:
            return "AuroraDBClusterStorage";
          case ResourceType::Idle:
            return "Idle";
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
  } // namespace ComputeOptimizer
} // namespace Aws
