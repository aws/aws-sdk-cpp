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

        static constexpr uint32_t OnPostCallAnalysisAvailable_HASH = ConstExprHashingUtils::HashString("OnPostCallAnalysisAvailable");
        static constexpr uint32_t OnRealTimeCallAnalysisAvailable_HASH = ConstExprHashingUtils::HashString("OnRealTimeCallAnalysisAvailable");
        static constexpr uint32_t OnPostChatAnalysisAvailable_HASH = ConstExprHashingUtils::HashString("OnPostChatAnalysisAvailable");
        static constexpr uint32_t OnZendeskTicketCreate_HASH = ConstExprHashingUtils::HashString("OnZendeskTicketCreate");
        static constexpr uint32_t OnZendeskTicketStatusUpdate_HASH = ConstExprHashingUtils::HashString("OnZendeskTicketStatusUpdate");
        static constexpr uint32_t OnSalesforceCaseCreate_HASH = ConstExprHashingUtils::HashString("OnSalesforceCaseCreate");
        static constexpr uint32_t OnContactEvaluationSubmit_HASH = ConstExprHashingUtils::HashString("OnContactEvaluationSubmit");
        static constexpr uint32_t OnMetricDataUpdate_HASH = ConstExprHashingUtils::HashString("OnMetricDataUpdate");


        EventSourceName GetEventSourceNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == OnContactEvaluationSubmit_HASH)
          {
            return EventSourceName::OnContactEvaluationSubmit;
          }
          else if (hashCode == OnMetricDataUpdate_HASH)
          {
            return EventSourceName::OnMetricDataUpdate;
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
          case EventSourceName::NOT_SET:
            return {};
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
          case EventSourceName::OnContactEvaluationSubmit:
            return "OnContactEvaluationSubmit";
          case EventSourceName::OnMetricDataUpdate:
            return "OnMetricDataUpdate";
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
