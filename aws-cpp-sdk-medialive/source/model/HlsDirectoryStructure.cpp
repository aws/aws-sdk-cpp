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

#include <aws/medialive/model/HlsDirectoryStructure.h>
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
  } // namespace MediaLive
} // namespace Aws
