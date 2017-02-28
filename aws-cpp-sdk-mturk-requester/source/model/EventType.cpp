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
#include <aws/mturk-requester/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int AssignmentAccepted_HASH = HashingUtils::HashString("AssignmentAccepted");
        static const int AssignmentAbandoned_HASH = HashingUtils::HashString("AssignmentAbandoned");
        static const int AssignmentReturned_HASH = HashingUtils::HashString("AssignmentReturned");
        static const int AssignmentSubmitted_HASH = HashingUtils::HashString("AssignmentSubmitted");
        static const int AssignmentRejected_HASH = HashingUtils::HashString("AssignmentRejected");
        static const int AssignmentApproved_HASH = HashingUtils::HashString("AssignmentApproved");
        static const int HITCreated_HASH = HashingUtils::HashString("HITCreated");
        static const int HITExpired_HASH = HashingUtils::HashString("HITExpired");
        static const int HITReviewable_HASH = HashingUtils::HashString("HITReviewable");
        static const int HITExtended_HASH = HashingUtils::HashString("HITExtended");
        static const int HITDisposed_HASH = HashingUtils::HashString("HITDisposed");
        static const int Ping_HASH = HashingUtils::HashString("Ping");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AssignmentAccepted_HASH)
          {
            return EventType::AssignmentAccepted;
          }
          else if (hashCode == AssignmentAbandoned_HASH)
          {
            return EventType::AssignmentAbandoned;
          }
          else if (hashCode == AssignmentReturned_HASH)
          {
            return EventType::AssignmentReturned;
          }
          else if (hashCode == AssignmentSubmitted_HASH)
          {
            return EventType::AssignmentSubmitted;
          }
          else if (hashCode == AssignmentRejected_HASH)
          {
            return EventType::AssignmentRejected;
          }
          else if (hashCode == AssignmentApproved_HASH)
          {
            return EventType::AssignmentApproved;
          }
          else if (hashCode == HITCreated_HASH)
          {
            return EventType::HITCreated;
          }
          else if (hashCode == HITExpired_HASH)
          {
            return EventType::HITExpired;
          }
          else if (hashCode == HITReviewable_HASH)
          {
            return EventType::HITReviewable;
          }
          else if (hashCode == HITExtended_HASH)
          {
            return EventType::HITExtended;
          }
          else if (hashCode == HITDisposed_HASH)
          {
            return EventType::HITDisposed;
          }
          else if (hashCode == Ping_HASH)
          {
            return EventType::Ping;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::AssignmentAccepted:
            return "AssignmentAccepted";
          case EventType::AssignmentAbandoned:
            return "AssignmentAbandoned";
          case EventType::AssignmentReturned:
            return "AssignmentReturned";
          case EventType::AssignmentSubmitted:
            return "AssignmentSubmitted";
          case EventType::AssignmentRejected:
            return "AssignmentRejected";
          case EventType::AssignmentApproved:
            return "AssignmentApproved";
          case EventType::HITCreated:
            return "HITCreated";
          case EventType::HITExpired:
            return "HITExpired";
          case EventType::HITReviewable:
            return "HITReviewable";
          case EventType::HITExtended:
            return "HITExtended";
          case EventType::HITDisposed:
            return "HITDisposed";
          case EventType::Ping:
            return "Ping";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
