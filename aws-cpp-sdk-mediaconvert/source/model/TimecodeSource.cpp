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

#include <aws/mediaconvert/model/TimecodeSource.h>
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
      namespace TimecodeSourceMapper
      {

        static const int EMBEDDED_HASH = HashingUtils::HashString("EMBEDDED");
        static const int ZEROBASED_HASH = HashingUtils::HashString("ZEROBASED");
        static const int SPECIFIEDSTART_HASH = HashingUtils::HashString("SPECIFIEDSTART");


        TimecodeSource GetTimecodeSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EMBEDDED_HASH)
          {
            return TimecodeSource::EMBEDDED;
          }
          else if (hashCode == ZEROBASED_HASH)
          {
            return TimecodeSource::ZEROBASED;
          }
          else if (hashCode == SPECIFIEDSTART_HASH)
          {
            return TimecodeSource::SPECIFIEDSTART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeSource>(hashCode);
          }

          return TimecodeSource::NOT_SET;
        }

        Aws::String GetNameForTimecodeSource(TimecodeSource enumValue)
        {
          switch(enumValue)
          {
          case TimecodeSource::EMBEDDED:
            return "EMBEDDED";
          case TimecodeSource::ZEROBASED:
            return "ZEROBASED";
          case TimecodeSource::SPECIFIEDSTART:
            return "SPECIFIEDSTART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeSourceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
