/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TemporalFilterPostFilterSharpening.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace TemporalFilterPostFilterSharpeningMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        TemporalFilterPostFilterSharpening GetTemporalFilterPostFilterSharpeningForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return TemporalFilterPostFilterSharpening::AUTO;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TemporalFilterPostFilterSharpening::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TemporalFilterPostFilterSharpening::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemporalFilterPostFilterSharpening>(hashCode);
          }

          return TemporalFilterPostFilterSharpening::NOT_SET;
        }

        Aws::String GetNameForTemporalFilterPostFilterSharpening(TemporalFilterPostFilterSharpening enumValue)
        {
          switch(enumValue)
          {
          case TemporalFilterPostFilterSharpening::AUTO:
            return "AUTO";
          case TemporalFilterPostFilterSharpening::DISABLED:
            return "DISABLED";
          case TemporalFilterPostFilterSharpening::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemporalFilterPostFilterSharpeningMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
