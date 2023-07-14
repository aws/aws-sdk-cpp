/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/FallbackBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace FallbackBehaviorMapper
      {

        static const int MATCH_HASH = HashingUtils::HashString("MATCH");
        static const int NO_MATCH_HASH = HashingUtils::HashString("NO_MATCH");


        FallbackBehavior GetFallbackBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MATCH_HASH)
          {
            return FallbackBehavior::MATCH;
          }
          else if (hashCode == NO_MATCH_HASH)
          {
            return FallbackBehavior::NO_MATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FallbackBehavior>(hashCode);
          }

          return FallbackBehavior::NOT_SET;
        }

        Aws::String GetNameForFallbackBehavior(FallbackBehavior enumValue)
        {
          switch(enumValue)
          {
          case FallbackBehavior::MATCH:
            return "MATCH";
          case FallbackBehavior::NO_MATCH:
            return "NO_MATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FallbackBehaviorMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
