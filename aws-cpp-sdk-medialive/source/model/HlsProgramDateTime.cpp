/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsProgramDateTime.h>
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
      namespace HlsProgramDateTimeMapper
      {

        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");
        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");


        HlsProgramDateTime GetHlsProgramDateTimeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_HASH)
          {
            return HlsProgramDateTime::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return HlsProgramDateTime::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsProgramDateTime>(hashCode);
          }

          return HlsProgramDateTime::NOT_SET;
        }

        Aws::String GetNameForHlsProgramDateTime(HlsProgramDateTime enumValue)
        {
          switch(enumValue)
          {
          case HlsProgramDateTime::EXCLUDE:
            return "EXCLUDE";
          case HlsProgramDateTime::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsProgramDateTimeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
