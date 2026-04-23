/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
