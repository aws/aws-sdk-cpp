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

#include <aws/xray/model/TimeRangeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace TimeRangeTypeMapper
      {

        static const int TraceId_HASH = HashingUtils::HashString("TraceId");
        static const int Event_HASH = HashingUtils::HashString("Event");


        TimeRangeType GetTimeRangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TraceId_HASH)
          {
            return TimeRangeType::TraceId;
          }
          else if (hashCode == Event_HASH)
          {
            return TimeRangeType::Event;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeRangeType>(hashCode);
          }

          return TimeRangeType::NOT_SET;
        }

        Aws::String GetNameForTimeRangeType(TimeRangeType enumValue)
        {
          switch(enumValue)
          {
          case TimeRangeType::TraceId:
            return "TraceId";
          case TimeRangeType::Event:
            return "Event";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeRangeTypeMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
