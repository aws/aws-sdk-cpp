/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InstanceStorageResourceType.h>
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
      namespace InstanceStorageResourceTypeMapper
      {

        static constexpr uint32_t CHAT_TRANSCRIPTS_HASH = ConstExprHashingUtils::HashString("CHAT_TRANSCRIPTS");
        static constexpr uint32_t CALL_RECORDINGS_HASH = ConstExprHashingUtils::HashString("CALL_RECORDINGS");
        static constexpr uint32_t SCHEDULED_REPORTS_HASH = ConstExprHashingUtils::HashString("SCHEDULED_REPORTS");
        static constexpr uint32_t MEDIA_STREAMS_HASH = ConstExprHashingUtils::HashString("MEDIA_STREAMS");
        static constexpr uint32_t CONTACT_TRACE_RECORDS_HASH = ConstExprHashingUtils::HashString("CONTACT_TRACE_RECORDS");
        static constexpr uint32_t AGENT_EVENTS_HASH = ConstExprHashingUtils::HashString("AGENT_EVENTS");
        static constexpr uint32_t REAL_TIME_CONTACT_ANALYSIS_SEGMENTS_HASH = ConstExprHashingUtils::HashString("REAL_TIME_CONTACT_ANALYSIS_SEGMENTS");
        static constexpr uint32_t ATTACHMENTS_HASH = ConstExprHashingUtils::HashString("ATTACHMENTS");
        static constexpr uint32_t CONTACT_EVALUATIONS_HASH = ConstExprHashingUtils::HashString("CONTACT_EVALUATIONS");
        static constexpr uint32_t SCREEN_RECORDINGS_HASH = ConstExprHashingUtils::HashString("SCREEN_RECORDINGS");


        InstanceStorageResourceType GetInstanceStorageResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHAT_TRANSCRIPTS_HASH)
          {
            return InstanceStorageResourceType::CHAT_TRANSCRIPTS;
          }
          else if (hashCode == CALL_RECORDINGS_HASH)
          {
            return InstanceStorageResourceType::CALL_RECORDINGS;
          }
          else if (hashCode == SCHEDULED_REPORTS_HASH)
          {
            return InstanceStorageResourceType::SCHEDULED_REPORTS;
          }
          else if (hashCode == MEDIA_STREAMS_HASH)
          {
            return InstanceStorageResourceType::MEDIA_STREAMS;
          }
          else if (hashCode == CONTACT_TRACE_RECORDS_HASH)
          {
            return InstanceStorageResourceType::CONTACT_TRACE_RECORDS;
          }
          else if (hashCode == AGENT_EVENTS_HASH)
          {
            return InstanceStorageResourceType::AGENT_EVENTS;
          }
          else if (hashCode == REAL_TIME_CONTACT_ANALYSIS_SEGMENTS_HASH)
          {
            return InstanceStorageResourceType::REAL_TIME_CONTACT_ANALYSIS_SEGMENTS;
          }
          else if (hashCode == ATTACHMENTS_HASH)
          {
            return InstanceStorageResourceType::ATTACHMENTS;
          }
          else if (hashCode == CONTACT_EVALUATIONS_HASH)
          {
            return InstanceStorageResourceType::CONTACT_EVALUATIONS;
          }
          else if (hashCode == SCREEN_RECORDINGS_HASH)
          {
            return InstanceStorageResourceType::SCREEN_RECORDINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceStorageResourceType>(hashCode);
          }

          return InstanceStorageResourceType::NOT_SET;
        }

        Aws::String GetNameForInstanceStorageResourceType(InstanceStorageResourceType enumValue)
        {
          switch(enumValue)
          {
          case InstanceStorageResourceType::NOT_SET:
            return {};
          case InstanceStorageResourceType::CHAT_TRANSCRIPTS:
            return "CHAT_TRANSCRIPTS";
          case InstanceStorageResourceType::CALL_RECORDINGS:
            return "CALL_RECORDINGS";
          case InstanceStorageResourceType::SCHEDULED_REPORTS:
            return "SCHEDULED_REPORTS";
          case InstanceStorageResourceType::MEDIA_STREAMS:
            return "MEDIA_STREAMS";
          case InstanceStorageResourceType::CONTACT_TRACE_RECORDS:
            return "CONTACT_TRACE_RECORDS";
          case InstanceStorageResourceType::AGENT_EVENTS:
            return "AGENT_EVENTS";
          case InstanceStorageResourceType::REAL_TIME_CONTACT_ANALYSIS_SEGMENTS:
            return "REAL_TIME_CONTACT_ANALYSIS_SEGMENTS";
          case InstanceStorageResourceType::ATTACHMENTS:
            return "ATTACHMENTS";
          case InstanceStorageResourceType::CONTACT_EVALUATIONS:
            return "CONTACT_EVALUATIONS";
          case InstanceStorageResourceType::SCREEN_RECORDINGS:
            return "SCREEN_RECORDINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStorageResourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
