/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/AnalyticsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace AnalyticsModeMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        AnalyticsMode GetAnalyticsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return AnalyticsMode::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return AnalyticsMode::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsMode>(hashCode);
          }

          return AnalyticsMode::NOT_SET;
        }

        Aws::String GetNameForAnalyticsMode(AnalyticsMode enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsMode::NOT_SET:
            return {};
          case AnalyticsMode::ENABLE:
            return "ENABLE";
          case AnalyticsMode::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsModeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
