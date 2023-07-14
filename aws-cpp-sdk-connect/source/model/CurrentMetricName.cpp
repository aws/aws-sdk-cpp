/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CurrentMetricName.h>
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
      namespace CurrentMetricNameMapper
      {

        static const int AGENTS_ONLINE_HASH = HashingUtils::HashString("AGENTS_ONLINE");
        static const int AGENTS_AVAILABLE_HASH = HashingUtils::HashString("AGENTS_AVAILABLE");
        static const int AGENTS_ON_CALL_HASH = HashingUtils::HashString("AGENTS_ON_CALL");
        static const int AGENTS_NON_PRODUCTIVE_HASH = HashingUtils::HashString("AGENTS_NON_PRODUCTIVE");
        static const int AGENTS_AFTER_CONTACT_WORK_HASH = HashingUtils::HashString("AGENTS_AFTER_CONTACT_WORK");
        static const int AGENTS_ERROR_HASH = HashingUtils::HashString("AGENTS_ERROR");
        static const int AGENTS_STAFFED_HASH = HashingUtils::HashString("AGENTS_STAFFED");
        static const int CONTACTS_IN_QUEUE_HASH = HashingUtils::HashString("CONTACTS_IN_QUEUE");
        static const int OLDEST_CONTACT_AGE_HASH = HashingUtils::HashString("OLDEST_CONTACT_AGE");
        static const int CONTACTS_SCHEDULED_HASH = HashingUtils::HashString("CONTACTS_SCHEDULED");
        static const int AGENTS_ON_CONTACT_HASH = HashingUtils::HashString("AGENTS_ON_CONTACT");
        static const int SLOTS_ACTIVE_HASH = HashingUtils::HashString("SLOTS_ACTIVE");
        static const int SLOTS_AVAILABLE_HASH = HashingUtils::HashString("SLOTS_AVAILABLE");


        CurrentMetricName GetCurrentMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENTS_ONLINE_HASH)
          {
            return CurrentMetricName::AGENTS_ONLINE;
          }
          else if (hashCode == AGENTS_AVAILABLE_HASH)
          {
            return CurrentMetricName::AGENTS_AVAILABLE;
          }
          else if (hashCode == AGENTS_ON_CALL_HASH)
          {
            return CurrentMetricName::AGENTS_ON_CALL;
          }
          else if (hashCode == AGENTS_NON_PRODUCTIVE_HASH)
          {
            return CurrentMetricName::AGENTS_NON_PRODUCTIVE;
          }
          else if (hashCode == AGENTS_AFTER_CONTACT_WORK_HASH)
          {
            return CurrentMetricName::AGENTS_AFTER_CONTACT_WORK;
          }
          else if (hashCode == AGENTS_ERROR_HASH)
          {
            return CurrentMetricName::AGENTS_ERROR;
          }
          else if (hashCode == AGENTS_STAFFED_HASH)
          {
            return CurrentMetricName::AGENTS_STAFFED;
          }
          else if (hashCode == CONTACTS_IN_QUEUE_HASH)
          {
            return CurrentMetricName::CONTACTS_IN_QUEUE;
          }
          else if (hashCode == OLDEST_CONTACT_AGE_HASH)
          {
            return CurrentMetricName::OLDEST_CONTACT_AGE;
          }
          else if (hashCode == CONTACTS_SCHEDULED_HASH)
          {
            return CurrentMetricName::CONTACTS_SCHEDULED;
          }
          else if (hashCode == AGENTS_ON_CONTACT_HASH)
          {
            return CurrentMetricName::AGENTS_ON_CONTACT;
          }
          else if (hashCode == SLOTS_ACTIVE_HASH)
          {
            return CurrentMetricName::SLOTS_ACTIVE;
          }
          else if (hashCode == SLOTS_AVAILABLE_HASH)
          {
            return CurrentMetricName::SLOTS_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrentMetricName>(hashCode);
          }

          return CurrentMetricName::NOT_SET;
        }

        Aws::String GetNameForCurrentMetricName(CurrentMetricName enumValue)
        {
          switch(enumValue)
          {
          case CurrentMetricName::AGENTS_ONLINE:
            return "AGENTS_ONLINE";
          case CurrentMetricName::AGENTS_AVAILABLE:
            return "AGENTS_AVAILABLE";
          case CurrentMetricName::AGENTS_ON_CALL:
            return "AGENTS_ON_CALL";
          case CurrentMetricName::AGENTS_NON_PRODUCTIVE:
            return "AGENTS_NON_PRODUCTIVE";
          case CurrentMetricName::AGENTS_AFTER_CONTACT_WORK:
            return "AGENTS_AFTER_CONTACT_WORK";
          case CurrentMetricName::AGENTS_ERROR:
            return "AGENTS_ERROR";
          case CurrentMetricName::AGENTS_STAFFED:
            return "AGENTS_STAFFED";
          case CurrentMetricName::CONTACTS_IN_QUEUE:
            return "CONTACTS_IN_QUEUE";
          case CurrentMetricName::OLDEST_CONTACT_AGE:
            return "OLDEST_CONTACT_AGE";
          case CurrentMetricName::CONTACTS_SCHEDULED:
            return "CONTACTS_SCHEDULED";
          case CurrentMetricName::AGENTS_ON_CONTACT:
            return "AGENTS_ON_CONTACT";
          case CurrentMetricName::SLOTS_ACTIVE:
            return "SLOTS_ACTIVE";
          case CurrentMetricName::SLOTS_AVAILABLE:
            return "SLOTS_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CurrentMetricNameMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
