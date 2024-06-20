/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBRecommendationFilterName.h>
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
      namespace RDSDBRecommendationFilterNameMapper
      {

        static const int InstanceFinding_HASH = HashingUtils::HashString("InstanceFinding");
        static const int InstanceFindingReasonCode_HASH = HashingUtils::HashString("InstanceFindingReasonCode");
        static const int StorageFinding_HASH = HashingUtils::HashString("StorageFinding");
        static const int StorageFindingReasonCode_HASH = HashingUtils::HashString("StorageFindingReasonCode");
        static const int Idle_HASH = HashingUtils::HashString("Idle");


        RDSDBRecommendationFilterName GetRDSDBRecommendationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceFinding_HASH)
          {
            return RDSDBRecommendationFilterName::InstanceFinding;
          }
          else if (hashCode == InstanceFindingReasonCode_HASH)
          {
            return RDSDBRecommendationFilterName::InstanceFindingReasonCode;
          }
          else if (hashCode == StorageFinding_HASH)
          {
            return RDSDBRecommendationFilterName::StorageFinding;
          }
          else if (hashCode == StorageFindingReasonCode_HASH)
          {
            return RDSDBRecommendationFilterName::StorageFindingReasonCode;
          }
          else if (hashCode == Idle_HASH)
          {
            return RDSDBRecommendationFilterName::Idle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RDSDBRecommendationFilterName>(hashCode);
          }

          return RDSDBRecommendationFilterName::NOT_SET;
        }

        Aws::String GetNameForRDSDBRecommendationFilterName(RDSDBRecommendationFilterName enumValue)
        {
          switch(enumValue)
          {
          case RDSDBRecommendationFilterName::NOT_SET:
            return {};
          case RDSDBRecommendationFilterName::InstanceFinding:
            return "InstanceFinding";
          case RDSDBRecommendationFilterName::InstanceFindingReasonCode:
            return "InstanceFindingReasonCode";
          case RDSDBRecommendationFilterName::StorageFinding:
            return "StorageFinding";
          case RDSDBRecommendationFilterName::StorageFindingReasonCode:
            return "StorageFindingReasonCode";
          case RDSDBRecommendationFilterName::Idle:
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

      } // namespace RDSDBRecommendationFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
