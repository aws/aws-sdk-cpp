/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/EventSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace EventSourceMapper
      {

        static const int CloudTrail_HASH = HashingUtils::HashString("CloudTrail");
        static const int Route53Resolver_HASH = HashingUtils::HashString("Route53Resolver");
        static const int VPCFlow_HASH = HashingUtils::HashString("VPCFlow");
        static const int EKSAudit_HASH = HashingUtils::HashString("EKSAudit");
        static const int AWSWAF_HASH = HashingUtils::HashString("AWSWAF");


        EventSource GetEventSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CloudTrail_HASH)
          {
            return EventSource::CloudTrail;
          }
          else if (hashCode == Route53Resolver_HASH)
          {
            return EventSource::Route53Resolver;
          }
          else if (hashCode == VPCFlow_HASH)
          {
            return EventSource::VPCFlow;
          }
          else if (hashCode == EKSAudit_HASH)
          {
            return EventSource::EKSAudit;
          }
          else if (hashCode == AWSWAF_HASH)
          {
            return EventSource::AWSWAF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSource>(hashCode);
          }

          return EventSource::NOT_SET;
        }

        Aws::String GetNameForEventSource(EventSource enumValue)
        {
          switch(enumValue)
          {
          case EventSource::NOT_SET:
            return {};
          case EventSource::CloudTrail:
            return "CloudTrail";
          case EventSource::Route53Resolver:
            return "Route53Resolver";
          case EventSource::VPCFlow:
            return "VPCFlow";
          case EventSource::EKSAudit:
            return "EKSAudit";
          case EventSource::AWSWAF:
            return "AWSWAF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
