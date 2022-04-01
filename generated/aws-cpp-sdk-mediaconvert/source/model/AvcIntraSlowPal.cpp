/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AvcIntraSlowPal.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AvcIntraSlowPalMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        AvcIntraSlowPal GetAvcIntraSlowPalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return AvcIntraSlowPal::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return AvcIntraSlowPal::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AvcIntraSlowPal>(hashCode);
          }

          return AvcIntraSlowPal::NOT_SET;
        }

        Aws::String GetNameForAvcIntraSlowPal(AvcIntraSlowPal enumValue)
        {
          switch(enumValue)
          {
          case AvcIntraSlowPal::DISABLED:
            return "DISABLED";
          case AvcIntraSlowPal::ENABLED:
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

      } // namespace AvcIntraSlowPalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
