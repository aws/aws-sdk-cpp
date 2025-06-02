/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RecommendationSourceType.h>
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
      namespace RecommendationSourceTypeMapper
      {

        static const int Ec2Instance_HASH = HashingUtils::HashString("Ec2Instance");
        static const int AutoScalingGroup_HASH = HashingUtils::HashString("AutoScalingGroup");
        static const int EbsVolume_HASH = HashingUtils::HashString("EbsVolume");
        static const int LambdaFunction_HASH = HashingUtils::HashString("LambdaFunction");
        static const int EcsService_HASH = HashingUtils::HashString("EcsService");
        static const int License_HASH = HashingUtils::HashString("License");
        static const int RdsDBInstance_HASH = HashingUtils::HashString("RdsDBInstance");
        static const int RdsDBInstanceStorage_HASH = HashingUtils::HashString("RdsDBInstanceStorage");
        static const int AuroraDBClusterStorage_HASH = HashingUtils::HashString("AuroraDBClusterStorage");


        RecommendationSourceType GetRecommendationSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ec2Instance_HASH)
          {
            return RecommendationSourceType::Ec2Instance;
          }
          else if (hashCode == AutoScalingGroup_HASH)
          {
            return RecommendationSourceType::AutoScalingGroup;
          }
          else if (hashCode == EbsVolume_HASH)
          {
            return RecommendationSourceType::EbsVolume;
          }
          else if (hashCode == LambdaFunction_HASH)
          {
            return RecommendationSourceType::LambdaFunction;
          }
          else if (hashCode == EcsService_HASH)
          {
            return RecommendationSourceType::EcsService;
          }
          else if (hashCode == License_HASH)
          {
            return RecommendationSourceType::License;
          }
          else if (hashCode == RdsDBInstance_HASH)
          {
            return RecommendationSourceType::RdsDBInstance;
          }
          else if (hashCode == RdsDBInstanceStorage_HASH)
          {
            return RecommendationSourceType::RdsDBInstanceStorage;
          }
          else if (hashCode == AuroraDBClusterStorage_HASH)
          {
            return RecommendationSourceType::AuroraDBClusterStorage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationSourceType>(hashCode);
          }

          return RecommendationSourceType::NOT_SET;
        }

        Aws::String GetNameForRecommendationSourceType(RecommendationSourceType enumValue)
        {
          switch(enumValue)
          {
          case RecommendationSourceType::NOT_SET:
            return {};
          case RecommendationSourceType::Ec2Instance:
            return "Ec2Instance";
          case RecommendationSourceType::AutoScalingGroup:
            return "AutoScalingGroup";
          case RecommendationSourceType::EbsVolume:
            return "EbsVolume";
          case RecommendationSourceType::LambdaFunction:
            return "LambdaFunction";
          case RecommendationSourceType::EcsService:
            return "EcsService";
          case RecommendationSourceType::License:
            return "License";
          case RecommendationSourceType::RdsDBInstance:
            return "RdsDBInstance";
          case RecommendationSourceType::RdsDBInstanceStorage:
            return "RdsDBInstanceStorage";
          case RecommendationSourceType::AuroraDBClusterStorage:
            return "AuroraDBClusterStorage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationSourceTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
