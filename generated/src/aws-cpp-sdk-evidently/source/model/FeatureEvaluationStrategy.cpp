/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/FeatureEvaluationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace FeatureEvaluationStrategyMapper
      {

        static const int ALL_RULES_HASH = HashingUtils::HashString("ALL_RULES");
        static const int DEFAULT_VARIATION_HASH = HashingUtils::HashString("DEFAULT_VARIATION");


        FeatureEvaluationStrategy GetFeatureEvaluationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_RULES_HASH)
          {
            return FeatureEvaluationStrategy::ALL_RULES;
          }
          else if (hashCode == DEFAULT_VARIATION_HASH)
          {
            return FeatureEvaluationStrategy::DEFAULT_VARIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureEvaluationStrategy>(hashCode);
          }

          return FeatureEvaluationStrategy::NOT_SET;
        }

        Aws::String GetNameForFeatureEvaluationStrategy(FeatureEvaluationStrategy enumValue)
        {
          switch(enumValue)
          {
          case FeatureEvaluationStrategy::NOT_SET:
            return {};
          case FeatureEvaluationStrategy::ALL_RULES:
            return "ALL_RULES";
          case FeatureEvaluationStrategy::DEFAULT_VARIATION:
            return "DEFAULT_VARIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureEvaluationStrategyMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
