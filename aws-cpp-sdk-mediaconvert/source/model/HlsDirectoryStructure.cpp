/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsDirectoryStructure.h>
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
      namespace HlsDirectoryStructureMapper
      {

        static const int SINGLE_DIRECTORY_HASH = HashingUtils::HashString("SINGLE_DIRECTORY");
        static const int SUBDIRECTORY_PER_STREAM_HASH = HashingUtils::HashString("SUBDIRECTORY_PER_STREAM");


        HlsDirectoryStructure GetHlsDirectoryStructureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGLE_DIRECTORY_HASH)
          {
            return HlsDirectoryStructure::SINGLE_DIRECTORY;
          }
          else if (hashCode == SUBDIRECTORY_PER_STREAM_HASH)
          {
            return HlsDirectoryStructure::SUBDIRECTORY_PER_STREAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsDirectoryStructure>(hashCode);
          }

          return HlsDirectoryStructure::NOT_SET;
        }

        Aws::String GetNameForHlsDirectoryStructure(HlsDirectoryStructure enumValue)
        {
          switch(enumValue)
          {
          case HlsDirectoryStructure::SINGLE_DIRECTORY:
            return "SINGLE_DIRECTORY";
          case HlsDirectoryStructure::SUBDIRECTORY_PER_STREAM:
            return "SUBDIRECTORY_PER_STREAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsDirectoryStructureMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
