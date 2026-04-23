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

#include <aws/glue/model/ScheduleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ScheduleStateMapper
      {

        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int NOT_SCHEDULED_HASH = HashingUtils::HashString("NOT_SCHEDULED");
        static const int TRANSITIONING_HASH = HashingUtils::HashString("TRANSITIONING");


        ScheduleState GetScheduleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_HASH)
          {
            return ScheduleState::SCHEDULED;
          }
          else if (hashCode == NOT_SCHEDULED_HASH)
          {
            return ScheduleState::NOT_SCHEDULED;
          }
          else if (hashCode == TRANSITIONING_HASH)
          {
            return ScheduleState::TRANSITIONING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleState>(hashCode);
          }

          return ScheduleState::NOT_SET;
        }

        Aws::String GetNameForScheduleState(ScheduleState enumValue)
        {
          switch(enumValue)
          {
          case ScheduleState::SCHEDULED:
            return "SCHEDULED";
          case ScheduleState::NOT_SCHEDULED:
            return "NOT_SCHEDULED";
          case ScheduleState::TRANSITIONING:
            return "TRANSITIONING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
