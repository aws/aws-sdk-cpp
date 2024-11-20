/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleRecommendationResourceType.h>
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
      namespace IdleRecommendationResourceTypeMapper
      {

        static const int EC2Instance_HASH = HashingUtils::HashString("EC2Instance");
        static const int AutoScalingGroup_HASH = HashingUtils::HashString("AutoScalingGroup");
        static const int EBSVolume_HASH = HashingUtils::HashString("EBSVolume");
        static const int ECSService_HASH = HashingUtils::HashString("ECSService");
        static const int RDSDBInstance_HASH = HashingUtils::HashString("RDSDBInstance");


        IdleRecommendationResourceType GetIdleRecommendationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2Instance_HASH)
          {
            return IdleRecommendationResourceType::EC2Instance;
          }
          else if (hashCode == AutoScalingGroup_HASH)
          {
            return IdleRecommendationResourceType::AutoScalingGroup;
          }
          else if (hashCode == EBSVolume_HASH)
          {
            return IdleRecommendationResourceType::EBSVolume;
          }
          else if (hashCode == ECSService_HASH)
          {
            return IdleRecommendationResourceType::ECSService;
          }
          else if (hashCode == RDSDBInstance_HASH)
          {
            return IdleRecommendationResourceType::RDSDBInstance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdleRecommendationResourceType>(hashCode);
          }

          return IdleRecommendationResourceType::NOT_SET;
        }

        Aws::String GetNameForIdleRecommendationResourceType(IdleRecommendationResourceType enumValue)
        {
          switch(enumValue)
          {
          case IdleRecommendationResourceType::NOT_SET:
            return {};
          case IdleRecommendationResourceType::EC2Instance:
            return "EC2Instance";
          case IdleRecommendationResourceType::AutoScalingGroup:
            return "AutoScalingGroup";
          case IdleRecommendationResourceType::EBSVolume:
            return "EBSVolume";
          case IdleRecommendationResourceType::ECSService:
            return "ECSService";
          case IdleRecommendationResourceType::RDSDBInstance:
            return "RDSDBInstance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdleRecommendationResourceTypeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
