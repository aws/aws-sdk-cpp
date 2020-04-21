/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ce/model/RecommendationTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace RecommendationTargetMapper
      {

        static const int SAME_INSTANCE_FAMILY_HASH = HashingUtils::HashString("SAME_INSTANCE_FAMILY");
        static const int CROSS_INSTANCE_FAMILY_HASH = HashingUtils::HashString("CROSS_INSTANCE_FAMILY");


        RecommendationTarget GetRecommendationTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAME_INSTANCE_FAMILY_HASH)
          {
            return RecommendationTarget::SAME_INSTANCE_FAMILY;
          }
          else if (hashCode == CROSS_INSTANCE_FAMILY_HASH)
          {
            return RecommendationTarget::CROSS_INSTANCE_FAMILY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationTarget>(hashCode);
          }

          return RecommendationTarget::NOT_SET;
        }

        Aws::String GetNameForRecommendationTarget(RecommendationTarget enumValue)
        {
          switch(enumValue)
          {
          case RecommendationTarget::SAME_INSTANCE_FAMILY:
            return "SAME_INSTANCE_FAMILY";
          case RecommendationTarget::CROSS_INSTANCE_FAMILY:
            return "CROSS_INSTANCE_FAMILY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTargetMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
