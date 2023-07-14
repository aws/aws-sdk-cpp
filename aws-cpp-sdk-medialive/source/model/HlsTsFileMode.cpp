/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsTsFileMode.h>
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
      namespace HlsTsFileModeMapper
      {

        static const int SEGMENTED_FILES_HASH = HashingUtils::HashString("SEGMENTED_FILES");
        static const int SINGLE_FILE_HASH = HashingUtils::HashString("SINGLE_FILE");


        HlsTsFileMode GetHlsTsFileModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEGMENTED_FILES_HASH)
          {
            return HlsTsFileMode::SEGMENTED_FILES;
          }
          else if (hashCode == SINGLE_FILE_HASH)
          {
            return HlsTsFileMode::SINGLE_FILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsTsFileMode>(hashCode);
          }

          return HlsTsFileMode::NOT_SET;
        }

        Aws::String GetNameForHlsTsFileMode(HlsTsFileMode enumValue)
        {
          switch(enumValue)
          {
          case HlsTsFileMode::SEGMENTED_FILES:
            return "SEGMENTED_FILES";
          case HlsTsFileMode::SINGLE_FILE:
            return "SINGLE_FILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsTsFileModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
