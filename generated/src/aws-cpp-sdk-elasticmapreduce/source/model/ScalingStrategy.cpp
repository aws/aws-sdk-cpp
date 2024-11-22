/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ScalingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ScalingStrategyMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");


        ScalingStrategy GetScalingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return ScalingStrategy::DEFAULT;
          }
          else if (hashCode == ADVANCED_HASH)
          {
            return ScalingStrategy::ADVANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingStrategy>(hashCode);
          }

          return ScalingStrategy::NOT_SET;
        }

        Aws::String GetNameForScalingStrategy(ScalingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ScalingStrategy::NOT_SET:
            return {};
          case ScalingStrategy::DEFAULT:
            return "DEFAULT";
          case ScalingStrategy::ADVANCED:
            return "ADVANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingStrategyMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
