/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FastLaunchStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace FastLaunchStateCodeMapper
      {

        static const int enabling_HASH = HashingUtils::HashString("enabling");
        static const int enabling_failed_HASH = HashingUtils::HashString("enabling-failed");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int enabled_failed_HASH = HashingUtils::HashString("enabled-failed");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int disabling_failed_HASH = HashingUtils::HashString("disabling-failed");


        FastLaunchStateCode GetFastLaunchStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabling_HASH)
          {
            return FastLaunchStateCode::enabling;
          }
          else if (hashCode == enabling_failed_HASH)
          {
            return FastLaunchStateCode::enabling_failed;
          }
          else if (hashCode == enabled_HASH)
          {
            return FastLaunchStateCode::enabled;
          }
          else if (hashCode == enabled_failed_HASH)
          {
            return FastLaunchStateCode::enabled_failed;
          }
          else if (hashCode == disabling_HASH)
          {
            return FastLaunchStateCode::disabling;
          }
          else if (hashCode == disabling_failed_HASH)
          {
            return FastLaunchStateCode::disabling_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FastLaunchStateCode>(hashCode);
          }

          return FastLaunchStateCode::NOT_SET;
        }

        Aws::String GetNameForFastLaunchStateCode(FastLaunchStateCode enumValue)
        {
          switch(enumValue)
          {
          case FastLaunchStateCode::NOT_SET:
            return {};
          case FastLaunchStateCode::enabling:
            return "enabling";
          case FastLaunchStateCode::enabling_failed:
            return "enabling-failed";
          case FastLaunchStateCode::enabled:
            return "enabled";
          case FastLaunchStateCode::enabled_failed:
            return "enabled-failed";
          case FastLaunchStateCode::disabling:
            return "disabling";
          case FastLaunchStateCode::disabling_failed:
            return "disabling-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FastLaunchStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
