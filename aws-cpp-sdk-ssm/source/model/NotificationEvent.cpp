﻿/*
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
#include <aws/ssm/model/NotificationEvent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace NotificationEventMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        NotificationEvent GetNotificationEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return NotificationEvent::All;
          }
          else if (hashCode == InProgress_HASH)
          {
            return NotificationEvent::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return NotificationEvent::Success;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return NotificationEvent::TimedOut;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return NotificationEvent::Cancelled;
          }
          else if (hashCode == Failed_HASH)
          {
            return NotificationEvent::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationEvent>(hashCode);
          }

          return NotificationEvent::NOT_SET;
        }

        Aws::String GetNameForNotificationEvent(NotificationEvent enumValue)
        {
          switch(enumValue)
          {
          case NotificationEvent::All:
            return "All";
          case NotificationEvent::InProgress:
            return "InProgress";
          case NotificationEvent::Success:
            return "Success";
          case NotificationEvent::TimedOut:
            return "TimedOut";
          case NotificationEvent::Cancelled:
            return "Cancelled";
          case NotificationEvent::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace NotificationEventMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
