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

        static constexpr uint32_t THING_HASH = ConstExprHashingUtils::HashString("THING");
        static constexpr uint32_t THING_GROUP_HASH = ConstExprHashingUtils::HashString("THING_GROUP");
        static constexpr uint32_t THING_TYPE_HASH = ConstExprHashingUtils::HashString("THING_TYPE");
        static constexpr uint32_t THING_GROUP_MEMBERSHIP_HASH = ConstExprHashingUtils::HashString("THING_GROUP_MEMBERSHIP");
        static constexpr uint32_t THING_GROUP_HIERARCHY_HASH = ConstExprHashingUtils::HashString("THING_GROUP_HIERARCHY");
        static constexpr uint32_t THING_TYPE_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("THING_TYPE_ASSOCIATION");
        static constexpr uint32_t JOB_HASH = ConstExprHashingUtils::HashString("JOB");
        static constexpr uint32_t JOB_EXECUTION_HASH = ConstExprHashingUtils::HashString("JOB_EXECUTION");
        static constexpr uint32_t POLICY_HASH = ConstExprHashingUtils::HashString("POLICY");
        static constexpr uint32_t CERTIFICATE_HASH = ConstExprHashingUtils::HashString("CERTIFICATE");
        static constexpr uint32_t CA_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("CA_CERTIFICATE");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EventType::NOT_SET:
            return {};
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
