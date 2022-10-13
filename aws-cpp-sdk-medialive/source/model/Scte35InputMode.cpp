/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35InputMode.h>
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
      namespace Scte35InputModeMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int FOLLOW_ACTIVE_HASH = HashingUtils::HashString("FOLLOW_ACTIVE");


        Scte35InputMode GetScte35InputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return Scte35InputMode::FIXED;
          }
          else if (hashCode == FOLLOW_ACTIVE_HASH)
          {
            return Scte35InputMode::FOLLOW_ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35InputMode>(hashCode);
          }

          return Scte35InputMode::NOT_SET;
        }

        Aws::String GetNameForScte35InputMode(Scte35InputMode enumValue)
        {
          switch(enumValue)
          {
          case Scte35InputMode::FIXED:
            return "FIXED";
          case Scte35InputMode::FOLLOW_ACTIVE:
            return "FOLLOW_ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35InputModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
