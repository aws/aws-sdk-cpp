/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HistoricalMetricName.h>
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
      namespace HistoricalMetricNameMapper
      {

        static constexpr uint32_t CONTACTS_QUEUED_HASH = ConstExprHashingUtils::HashString("CONTACTS_QUEUED");
        static constexpr uint32_t CONTACTS_HANDLED_HASH = ConstExprHashingUtils::HashString("CONTACTS_HANDLED");
        static constexpr uint32_t CONTACTS_ABANDONED_HASH = ConstExprHashingUtils::HashString("CONTACTS_ABANDONED");
        static constexpr uint32_t CONTACTS_CONSULTED_HASH = ConstExprHashingUtils::HashString("CONTACTS_CONSULTED");
        static constexpr uint32_t CONTACTS_AGENT_HUNG_UP_FIRST_HASH = ConstExprHashingUtils::HashString("CONTACTS_AGENT_HUNG_UP_FIRST");
        static constexpr uint32_t CONTACTS_HANDLED_INCOMING_HASH = ConstExprHashingUtils::HashString("CONTACTS_HANDLED_INCOMING");
        static constexpr uint32_t CONTACTS_HANDLED_OUTBOUND_HASH = ConstExprHashingUtils::HashString("CONTACTS_HANDLED_OUTBOUND");
        static constexpr uint32_t CONTACTS_HOLD_ABANDONS_HASH = ConstExprHashingUtils::HashString("CONTACTS_HOLD_ABANDONS");
        static constexpr uint32_t CONTACTS_TRANSFERRED_IN_HASH = ConstExprHashingUtils::HashString("CONTACTS_TRANSFERRED_IN");
        static constexpr uint32_t CONTACTS_TRANSFERRED_OUT_HASH = ConstExprHashingUtils::HashString("CONTACTS_TRANSFERRED_OUT");
        static constexpr uint32_t CONTACTS_TRANSFERRED_IN_FROM_QUEUE_HASH = ConstExprHashingUtils::HashString("CONTACTS_TRANSFERRED_IN_FROM_QUEUE");
        static constexpr uint32_t CONTACTS_TRANSFERRED_OUT_FROM_QUEUE_HASH = ConstExprHashingUtils::HashString("CONTACTS_TRANSFERRED_OUT_FROM_QUEUE");
        static constexpr uint32_t CONTACTS_MISSED_HASH = ConstExprHashingUtils::HashString("CONTACTS_MISSED");
        static constexpr uint32_t CALLBACK_CONTACTS_HANDLED_HASH = ConstExprHashingUtils::HashString("CALLBACK_CONTACTS_HANDLED");
        static constexpr uint32_t API_CONTACTS_HANDLED_HASH = ConstExprHashingUtils::HashString("API_CONTACTS_HANDLED");
        static constexpr uint32_t OCCUPANCY_HASH = ConstExprHashingUtils::HashString("OCCUPANCY");
        static constexpr uint32_t HANDLE_TIME_HASH = ConstExprHashingUtils::HashString("HANDLE_TIME");
        static constexpr uint32_t AFTER_CONTACT_WORK_TIME_HASH = ConstExprHashingUtils::HashString("AFTER_CONTACT_WORK_TIME");
        static constexpr uint32_t QUEUED_TIME_HASH = ConstExprHashingUtils::HashString("QUEUED_TIME");
        static constexpr uint32_t ABANDON_TIME_HASH = ConstExprHashingUtils::HashString("ABANDON_TIME");
        static constexpr uint32_t QUEUE_ANSWER_TIME_HASH = ConstExprHashingUtils::HashString("QUEUE_ANSWER_TIME");
        static constexpr uint32_t HOLD_TIME_HASH = ConstExprHashingUtils::HashString("HOLD_TIME");
        static constexpr uint32_t INTERACTION_TIME_HASH = ConstExprHashingUtils::HashString("INTERACTION_TIME");
        static constexpr uint32_t INTERACTION_AND_HOLD_TIME_HASH = ConstExprHashingUtils::HashString("INTERACTION_AND_HOLD_TIME");
        static constexpr uint32_t SERVICE_LEVEL_HASH = ConstExprHashingUtils::HashString("SERVICE_LEVEL");


        HistoricalMetricName GetHistoricalMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTACTS_QUEUED_HASH)
          {
            return HistoricalMetricName::CONTACTS_QUEUED;
          }
          else if (hashCode == CONTACTS_HANDLED_HASH)
          {
            return HistoricalMetricName::CONTACTS_HANDLED;
          }
          else if (hashCode == CONTACTS_ABANDONED_HASH)
          {
            return HistoricalMetricName::CONTACTS_ABANDONED;
          }
          else if (hashCode == CONTACTS_CONSULTED_HASH)
          {
            return HistoricalMetricName::CONTACTS_CONSULTED;
          }
          else if (hashCode == CONTACTS_AGENT_HUNG_UP_FIRST_HASH)
          {
            return HistoricalMetricName::CONTACTS_AGENT_HUNG_UP_FIRST;
          }
          else if (hashCode == CONTACTS_HANDLED_INCOMING_HASH)
          {
            return HistoricalMetricName::CONTACTS_HANDLED_INCOMING;
          }
          else if (hashCode == CONTACTS_HANDLED_OUTBOUND_HASH)
          {
            return HistoricalMetricName::CONTACTS_HANDLED_OUTBOUND;
          }
          else if (hashCode == CONTACTS_HOLD_ABANDONS_HASH)
          {
            return HistoricalMetricName::CONTACTS_HOLD_ABANDONS;
          }
          else if (hashCode == CONTACTS_TRANSFERRED_IN_HASH)
          {
            return HistoricalMetricName::CONTACTS_TRANSFERRED_IN;
          }
          else if (hashCode == CONTACTS_TRANSFERRED_OUT_HASH)
          {
            return HistoricalMetricName::CONTACTS_TRANSFERRED_OUT;
          }
          else if (hashCode == CONTACTS_TRANSFERRED_IN_FROM_QUEUE_HASH)
          {
            return HistoricalMetricName::CONTACTS_TRANSFERRED_IN_FROM_QUEUE;
          }
          else if (hashCode == CONTACTS_TRANSFERRED_OUT_FROM_QUEUE_HASH)
          {
            return HistoricalMetricName::CONTACTS_TRANSFERRED_OUT_FROM_QUEUE;
          }
          else if (hashCode == CONTACTS_MISSED_HASH)
          {
            return HistoricalMetricName::CONTACTS_MISSED;
          }
          else if (hashCode == CALLBACK_CONTACTS_HANDLED_HASH)
          {
            return HistoricalMetricName::CALLBACK_CONTACTS_HANDLED;
          }
          else if (hashCode == API_CONTACTS_HANDLED_HASH)
          {
            return HistoricalMetricName::API_CONTACTS_HANDLED;
          }
          else if (hashCode == OCCUPANCY_HASH)
          {
            return HistoricalMetricName::OCCUPANCY;
          }
          else if (hashCode == HANDLE_TIME_HASH)
          {
            return HistoricalMetricName::HANDLE_TIME;
          }
          else if (hashCode == AFTER_CONTACT_WORK_TIME_HASH)
          {
            return HistoricalMetricName::AFTER_CONTACT_WORK_TIME;
          }
          else if (hashCode == QUEUED_TIME_HASH)
          {
            return HistoricalMetricName::QUEUED_TIME;
          }
          else if (hashCode == ABANDON_TIME_HASH)
          {
            return HistoricalMetricName::ABANDON_TIME;
          }
          else if (hashCode == QUEUE_ANSWER_TIME_HASH)
          {
            return HistoricalMetricName::QUEUE_ANSWER_TIME;
          }
          else if (hashCode == HOLD_TIME_HASH)
          {
            return HistoricalMetricName::HOLD_TIME;
          }
          else if (hashCode == INTERACTION_TIME_HASH)
          {
            return HistoricalMetricName::INTERACTION_TIME;
          }
          else if (hashCode == INTERACTION_AND_HOLD_TIME_HASH)
          {
            return HistoricalMetricName::INTERACTION_AND_HOLD_TIME;
          }
          else if (hashCode == SERVICE_LEVEL_HASH)
          {
            return HistoricalMetricName::SERVICE_LEVEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HistoricalMetricName>(hashCode);
          }

          return HistoricalMetricName::NOT_SET;
        }

        Aws::String GetNameForHistoricalMetricName(HistoricalMetricName enumValue)
        {
          switch(enumValue)
          {
          case HistoricalMetricName::NOT_SET:
            return {};
          case HistoricalMetricName::CONTACTS_QUEUED:
            return "CONTACTS_QUEUED";
          case HistoricalMetricName::CONTACTS_HANDLED:
            return "CONTACTS_HANDLED";
          case HistoricalMetricName::CONTACTS_ABANDONED:
            return "CONTACTS_ABANDONED";
          case HistoricalMetricName::CONTACTS_CONSULTED:
            return "CONTACTS_CONSULTED";
          case HistoricalMetricName::CONTACTS_AGENT_HUNG_UP_FIRST:
            return "CONTACTS_AGENT_HUNG_UP_FIRST";
          case HistoricalMetricName::CONTACTS_HANDLED_INCOMING:
            return "CONTACTS_HANDLED_INCOMING";
          case HistoricalMetricName::CONTACTS_HANDLED_OUTBOUND:
            return "CONTACTS_HANDLED_OUTBOUND";
          case HistoricalMetricName::CONTACTS_HOLD_ABANDONS:
            return "CONTACTS_HOLD_ABANDONS";
          case HistoricalMetricName::CONTACTS_TRANSFERRED_IN:
            return "CONTACTS_TRANSFERRED_IN";
          case HistoricalMetricName::CONTACTS_TRANSFERRED_OUT:
            return "CONTACTS_TRANSFERRED_OUT";
          case HistoricalMetricName::CONTACTS_TRANSFERRED_IN_FROM_QUEUE:
            return "CONTACTS_TRANSFERRED_IN_FROM_QUEUE";
          case HistoricalMetricName::CONTACTS_TRANSFERRED_OUT_FROM_QUEUE:
            return "CONTACTS_TRANSFERRED_OUT_FROM_QUEUE";
          case HistoricalMetricName::CONTACTS_MISSED:
            return "CONTACTS_MISSED";
          case HistoricalMetricName::CALLBACK_CONTACTS_HANDLED:
            return "CALLBACK_CONTACTS_HANDLED";
          case HistoricalMetricName::API_CONTACTS_HANDLED:
            return "API_CONTACTS_HANDLED";
          case HistoricalMetricName::OCCUPANCY:
            return "OCCUPANCY";
          case HistoricalMetricName::HANDLE_TIME:
            return "HANDLE_TIME";
          case HistoricalMetricName::AFTER_CONTACT_WORK_TIME:
            return "AFTER_CONTACT_WORK_TIME";
          case HistoricalMetricName::QUEUED_TIME:
            return "QUEUED_TIME";
          case HistoricalMetricName::ABANDON_TIME:
            return "ABANDON_TIME";
          case HistoricalMetricName::QUEUE_ANSWER_TIME:
            return "QUEUE_ANSWER_TIME";
          case HistoricalMetricName::HOLD_TIME:
            return "HOLD_TIME";
          case HistoricalMetricName::INTERACTION_TIME:
            return "INTERACTION_TIME";
          case HistoricalMetricName::INTERACTION_AND_HOLD_TIME:
            return "INTERACTION_AND_HOLD_TIME";
          case HistoricalMetricName::SERVICE_LEVEL:
            return "SERVICE_LEVEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HistoricalMetricNameMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
