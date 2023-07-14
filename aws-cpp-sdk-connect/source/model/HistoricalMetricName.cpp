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

        static const int CONTACTS_QUEUED_HASH = HashingUtils::HashString("CONTACTS_QUEUED");
        static const int CONTACTS_HANDLED_HASH = HashingUtils::HashString("CONTACTS_HANDLED");
        static const int CONTACTS_ABANDONED_HASH = HashingUtils::HashString("CONTACTS_ABANDONED");
        static const int CONTACTS_CONSULTED_HASH = HashingUtils::HashString("CONTACTS_CONSULTED");
        static const int CONTACTS_AGENT_HUNG_UP_FIRST_HASH = HashingUtils::HashString("CONTACTS_AGENT_HUNG_UP_FIRST");
        static const int CONTACTS_HANDLED_INCOMING_HASH = HashingUtils::HashString("CONTACTS_HANDLED_INCOMING");
        static const int CONTACTS_HANDLED_OUTBOUND_HASH = HashingUtils::HashString("CONTACTS_HANDLED_OUTBOUND");
        static const int CONTACTS_HOLD_ABANDONS_HASH = HashingUtils::HashString("CONTACTS_HOLD_ABANDONS");
        static const int CONTACTS_TRANSFERRED_IN_HASH = HashingUtils::HashString("CONTACTS_TRANSFERRED_IN");
        static const int CONTACTS_TRANSFERRED_OUT_HASH = HashingUtils::HashString("CONTACTS_TRANSFERRED_OUT");
        static const int CONTACTS_TRANSFERRED_IN_FROM_QUEUE_HASH = HashingUtils::HashString("CONTACTS_TRANSFERRED_IN_FROM_QUEUE");
        static const int CONTACTS_TRANSFERRED_OUT_FROM_QUEUE_HASH = HashingUtils::HashString("CONTACTS_TRANSFERRED_OUT_FROM_QUEUE");
        static const int CONTACTS_MISSED_HASH = HashingUtils::HashString("CONTACTS_MISSED");
        static const int CALLBACK_CONTACTS_HANDLED_HASH = HashingUtils::HashString("CALLBACK_CONTACTS_HANDLED");
        static const int API_CONTACTS_HANDLED_HASH = HashingUtils::HashString("API_CONTACTS_HANDLED");
        static const int OCCUPANCY_HASH = HashingUtils::HashString("OCCUPANCY");
        static const int HANDLE_TIME_HASH = HashingUtils::HashString("HANDLE_TIME");
        static const int AFTER_CONTACT_WORK_TIME_HASH = HashingUtils::HashString("AFTER_CONTACT_WORK_TIME");
        static const int QUEUED_TIME_HASH = HashingUtils::HashString("QUEUED_TIME");
        static const int ABANDON_TIME_HASH = HashingUtils::HashString("ABANDON_TIME");
        static const int QUEUE_ANSWER_TIME_HASH = HashingUtils::HashString("QUEUE_ANSWER_TIME");
        static const int HOLD_TIME_HASH = HashingUtils::HashString("HOLD_TIME");
        static const int INTERACTION_TIME_HASH = HashingUtils::HashString("INTERACTION_TIME");
        static const int INTERACTION_AND_HOLD_TIME_HASH = HashingUtils::HashString("INTERACTION_AND_HOLD_TIME");
        static const int SERVICE_LEVEL_HASH = HashingUtils::HashString("SERVICE_LEVEL");


        HistoricalMetricName GetHistoricalMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
