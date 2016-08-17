/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/StartTimerFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace StartTimerFailedCauseMapper
      {

        static const int TIMER_ID_ALREADY_IN_USE_HASH = HashingUtils::HashString("TIMER_ID_ALREADY_IN_USE");
        static const int OPEN_TIMERS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("OPEN_TIMERS_LIMIT_EXCEEDED");
        static const int TIMER_CREATION_RATE_EXCEEDED_HASH = HashingUtils::HashString("TIMER_CREATION_RATE_EXCEEDED");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        StartTimerFailedCause GetStartTimerFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIMER_ID_ALREADY_IN_USE_HASH)
          {
            return StartTimerFailedCause::TIMER_ID_ALREADY_IN_USE;
          }
          else if (hashCode == OPEN_TIMERS_LIMIT_EXCEEDED_HASH)
          {
            return StartTimerFailedCause::OPEN_TIMERS_LIMIT_EXCEEDED;
          }
          else if (hashCode == TIMER_CREATION_RATE_EXCEEDED_HASH)
          {
            return StartTimerFailedCause::TIMER_CREATION_RATE_EXCEEDED;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return StartTimerFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartTimerFailedCause>(hashCode);
          }

          return StartTimerFailedCause::NOT_SET;
        }

        Aws::String GetNameForStartTimerFailedCause(StartTimerFailedCause enumValue)
        {
          switch(enumValue)
          {
          case StartTimerFailedCause::TIMER_ID_ALREADY_IN_USE:
            return "TIMER_ID_ALREADY_IN_USE";
          case StartTimerFailedCause::OPEN_TIMERS_LIMIT_EXCEEDED:
            return "OPEN_TIMERS_LIMIT_EXCEEDED";
          case StartTimerFailedCause::TIMER_CREATION_RATE_EXCEEDED:
            return "TIMER_CREATION_RATE_EXCEEDED";
          case StartTimerFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StartTimerFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
