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

#include <aws/health/model/EventTypeCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Health
  {
    namespace Model
    {
      namespace EventTypeCategoryMapper
      {

        static const int issue_HASH = HashingUtils::HashString("issue");
        static const int accountNotification_HASH = HashingUtils::HashString("accountNotification");
        static const int scheduledChange_HASH = HashingUtils::HashString("scheduledChange");
        static const int investigation_HASH = HashingUtils::HashString("investigation");


        EventTypeCategory GetEventTypeCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == issue_HASH)
          {
            return EventTypeCategory::issue;
          }
          else if (hashCode == accountNotification_HASH)
          {
            return EventTypeCategory::accountNotification;
          }
          else if (hashCode == scheduledChange_HASH)
          {
            return EventTypeCategory::scheduledChange;
          }
          else if (hashCode == investigation_HASH)
          {
            return EventTypeCategory::investigation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventTypeCategory>(hashCode);
          }

          return EventTypeCategory::NOT_SET;
        }

        Aws::String GetNameForEventTypeCategory(EventTypeCategory enumValue)
        {
          switch(enumValue)
          {
          case EventTypeCategory::issue:
            return "issue";
          case EventTypeCategory::accountNotification:
            return "accountNotification";
          case EventTypeCategory::scheduledChange:
            return "scheduledChange";
          case EventTypeCategory::investigation:
            return "investigation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeCategoryMapper
    } // namespace Model
  } // namespace Health
} // namespace Aws
