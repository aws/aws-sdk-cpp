/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/EventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace EventTypeMapper
      {

        static const int THING_HASH = HashingUtils::HashString("THING");
        static const int THING_GROUP_HASH = HashingUtils::HashString("THING_GROUP");
        static const int THING_TYPE_HASH = HashingUtils::HashString("THING_TYPE");
        static const int THING_GROUP_MEMBERSHIP_HASH = HashingUtils::HashString("THING_GROUP_MEMBERSHIP");
        static const int THING_GROUP_HIERARCHY_HASH = HashingUtils::HashString("THING_GROUP_HIERARCHY");
        static const int THING_TYPE_ASSOCIATION_HASH = HashingUtils::HashString("THING_TYPE_ASSOCIATION");
        static const int JOB_HASH = HashingUtils::HashString("JOB");
        static const int JOB_EXECUTION_HASH = HashingUtils::HashString("JOB_EXECUTION");
        static const int POLICY_HASH = HashingUtils::HashString("POLICY");
        static const int CERTIFICATE_HASH = HashingUtils::HashString("CERTIFICATE");
        static const int CA_CERTIFICATE_HASH = HashingUtils::HashString("CA_CERTIFICATE");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == THING_HASH)
          {
            return EventType::THING;
          }
          else if (hashCode == THING_GROUP_HASH)
          {
            return EventType::THING_GROUP;
          }
          else if (hashCode == THING_TYPE_HASH)
          {
            return EventType::THING_TYPE;
          }
          else if (hashCode == THING_GROUP_MEMBERSHIP_HASH)
          {
            return EventType::THING_GROUP_MEMBERSHIP;
          }
          else if (hashCode == THING_GROUP_HIERARCHY_HASH)
          {
            return EventType::THING_GROUP_HIERARCHY;
          }
          else if (hashCode == THING_TYPE_ASSOCIATION_HASH)
          {
            return EventType::THING_TYPE_ASSOCIATION;
          }
          else if (hashCode == JOB_HASH)
          {
            return EventType::JOB;
          }
          else if (hashCode == JOB_EXECUTION_HASH)
          {
            return EventType::JOB_EXECUTION;
          }
          else if (hashCode == POLICY_HASH)
          {
            return EventType::POLICY;
          }
          else if (hashCode == CERTIFICATE_HASH)
          {
            return EventType::CERTIFICATE;
          }
          else if (hashCode == CA_CERTIFICATE_HASH)
          {
            return EventType::CA_CERTIFICATE;
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
          case EventType::THING:
            return "THING";
          case EventType::THING_GROUP:
            return "THING_GROUP";
          case EventType::THING_TYPE:
            return "THING_TYPE";
          case EventType::THING_GROUP_MEMBERSHIP:
            return "THING_GROUP_MEMBERSHIP";
          case EventType::THING_GROUP_HIERARCHY:
            return "THING_GROUP_HIERARCHY";
          case EventType::THING_TYPE_ASSOCIATION:
            return "THING_TYPE_ASSOCIATION";
          case EventType::JOB:
            return "JOB";
          case EventType::JOB_EXECUTION:
            return "JOB_EXECUTION";
          case EventType::POLICY:
            return "POLICY";
          case EventType::CERTIFICATE:
            return "CERTIFICATE";
          case EventType::CA_CERTIFICATE:
            return "CA_CERTIFICATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
