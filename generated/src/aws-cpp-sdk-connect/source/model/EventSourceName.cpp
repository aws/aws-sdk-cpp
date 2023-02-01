/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EventSourceName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace EventSourceNameMapper
      {

        static const int OnPostCallAnalysisAvailable_HASH = HashingUtils::HashString("OnPostCallAnalysisAvailable");
        static const int OnRealTimeCallAnalysisAvailable_HASH = HashingUtils::HashString("OnRealTimeCallAnalysisAvailable");
        static const int OnPostChatAnalysisAvailable_HASH = HashingUtils::HashString("OnPostChatAnalysisAvailable");
        static const int OnZendeskTicketCreate_HASH = HashingUtils::HashString("OnZendeskTicketCreate");
        static const int OnZendeskTicketStatusUpdate_HASH = HashingUtils::HashString("OnZendeskTicketStatusUpdate");
        static const int OnSalesforceCaseCreate_HASH = HashingUtils::HashString("OnSalesforceCaseCreate");


        EventSourceName GetEventSourceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OnPostCallAnalysisAvailable_HASH)
          {
            return EventSourceName::OnPostCallAnalysisAvailable;
          }
          else if (hashCode == OnRealTimeCallAnalysisAvailable_HASH)
          {
            return EventSourceName::OnRealTimeCallAnalysisAvailable;
          }
          else if (hashCode == OnPostChatAnalysisAvailable_HASH)
          {
            return EventSourceName::OnPostChatAnalysisAvailable;
          }
          else if (hashCode == OnZendeskTicketCreate_HASH)
          {
            return EventSourceName::OnZendeskTicketCreate;
          }
          else if (hashCode == OnZendeskTicketStatusUpdate_HASH)
          {
            return EventSourceName::OnZendeskTicketStatusUpdate;
          }
          else if (hashCode == OnSalesforceCaseCreate_HASH)
          {
            return EventSourceName::OnSalesforceCaseCreate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSourceName>(hashCode);
          }

          return EventSourceName::NOT_SET;
        }

        Aws::String GetNameForEventSourceName(EventSourceName enumValue)
        {
          switch(enumValue)
          {
          case EventSourceName::OnPostCallAnalysisAvailable:
            return "OnPostCallAnalysisAvailable";
          case EventSourceName::OnRealTimeCallAnalysisAvailable:
            return "OnRealTimeCallAnalysisAvailable";
          case EventSourceName::OnPostChatAnalysisAvailable:
            return "OnPostChatAnalysisAvailable";
          case EventSourceName::OnZendeskTicketCreate:
            return "OnZendeskTicketCreate";
          case EventSourceName::OnZendeskTicketStatusUpdate:
            return "OnZendeskTicketStatusUpdate";
          case EventSourceName::OnSalesforceCaseCreate:
            return "OnSalesforceCaseCreate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceNameMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
