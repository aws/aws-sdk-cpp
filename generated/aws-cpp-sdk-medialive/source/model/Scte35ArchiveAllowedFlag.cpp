/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35ArchiveAllowedFlag.h>
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
      namespace Scte35ArchiveAllowedFlagMapper
      {

        static const int ARCHIVE_NOT_ALLOWED_HASH = HashingUtils::HashString("ARCHIVE_NOT_ALLOWED");
        static const int ARCHIVE_ALLOWED_HASH = HashingUtils::HashString("ARCHIVE_ALLOWED");


        Scte35ArchiveAllowedFlag GetScte35ArchiveAllowedFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARCHIVE_NOT_ALLOWED_HASH)
          {
            return Scte35ArchiveAllowedFlag::ARCHIVE_NOT_ALLOWED;
          }
          else if (hashCode == ARCHIVE_ALLOWED_HASH)
          {
            return Scte35ArchiveAllowedFlag::ARCHIVE_ALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35ArchiveAllowedFlag>(hashCode);
          }

          return Scte35ArchiveAllowedFlag::NOT_SET;
        }

        Aws::String GetNameForScte35ArchiveAllowedFlag(Scte35ArchiveAllowedFlag enumValue)
        {
          switch(enumValue)
          {
          case Scte35ArchiveAllowedFlag::ARCHIVE_NOT_ALLOWED:
            return "ARCHIVE_NOT_ALLOWED";
          case Scte35ArchiveAllowedFlag::ARCHIVE_ALLOWED:
            return "ARCHIVE_ALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Scte35ArchiveAllowedFlagMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
