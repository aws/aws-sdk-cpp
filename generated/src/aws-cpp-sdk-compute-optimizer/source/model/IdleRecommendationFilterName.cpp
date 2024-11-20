/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleRecommendationFilterName.h>
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
      namespace IdleRecommendationFilterNameMapper
      {

        static const int Finding_HASH = HashingUtils::HashString("Finding");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");


        IdleRecommendationFilterName GetIdleRecommendationFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Finding_HASH)
          {
            return IdleRecommendationFilterName::Finding;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return IdleRecommendationFilterName::ResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdleRecommendationFilterName>(hashCode);
          }

          return IdleRecommendationFilterName::NOT_SET;
        }

        Aws::String GetNameForIdleRecommendationFilterName(IdleRecommendationFilterName enumValue)
        {
          switch(enumValue)
          {
          case IdleRecommendationFilterName::NOT_SET:
            return {};
          case IdleRecommendationFilterName::Finding:
            return "Finding";
          case IdleRecommendationFilterName::ResourceType:
            return "ResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdleRecommendationFilterNameMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
