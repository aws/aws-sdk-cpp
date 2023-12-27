/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/CapabilityHealthReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace CapabilityHealthReasonMapper
      {

        static const int NO_REGISTERED_AGENT_HASH = HashingUtils::HashString("NO_REGISTERED_AGENT");
        static const int INVALID_IP_OWNERSHIP_HASH = HashingUtils::HashString("INVALID_IP_OWNERSHIP");
        static const int NOT_AUTHORIZED_TO_CREATE_SLR_HASH = HashingUtils::HashString("NOT_AUTHORIZED_TO_CREATE_SLR");
        static const int UNVERIFIED_IP_OWNERSHIP_HASH = HashingUtils::HashString("UNVERIFIED_IP_OWNERSHIP");
        static const int INITIALIZING_DATAPLANE_HASH = HashingUtils::HashString("INITIALIZING_DATAPLANE");
        static const int DATAPLANE_FAILURE_HASH = HashingUtils::HashString("DATAPLANE_FAILURE");
        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");


        CapabilityHealthReason GetCapabilityHealthReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_REGISTERED_AGENT_HASH)
          {
            return CapabilityHealthReason::NO_REGISTERED_AGENT;
          }
          else if (hashCode == INVALID_IP_OWNERSHIP_HASH)
          {
            return CapabilityHealthReason::INVALID_IP_OWNERSHIP;
          }
          else if (hashCode == NOT_AUTHORIZED_TO_CREATE_SLR_HASH)
          {
            return CapabilityHealthReason::NOT_AUTHORIZED_TO_CREATE_SLR;
          }
          else if (hashCode == UNVERIFIED_IP_OWNERSHIP_HASH)
          {
            return CapabilityHealthReason::UNVERIFIED_IP_OWNERSHIP;
          }
          else if (hashCode == INITIALIZING_DATAPLANE_HASH)
          {
            return CapabilityHealthReason::INITIALIZING_DATAPLANE;
          }
          else if (hashCode == DATAPLANE_FAILURE_HASH)
          {
            return CapabilityHealthReason::DATAPLANE_FAILURE;
          }
          else if (hashCode == HEALTHY_HASH)
          {
            return CapabilityHealthReason::HEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilityHealthReason>(hashCode);
          }

          return CapabilityHealthReason::NOT_SET;
        }

        Aws::String GetNameForCapabilityHealthReason(CapabilityHealthReason enumValue)
        {
          switch(enumValue)
          {
          case CapabilityHealthReason::NOT_SET:
            return {};
          case CapabilityHealthReason::NO_REGISTERED_AGENT:
            return "NO_REGISTERED_AGENT";
          case CapabilityHealthReason::INVALID_IP_OWNERSHIP:
            return "INVALID_IP_OWNERSHIP";
          case CapabilityHealthReason::NOT_AUTHORIZED_TO_CREATE_SLR:
            return "NOT_AUTHORIZED_TO_CREATE_SLR";
          case CapabilityHealthReason::UNVERIFIED_IP_OWNERSHIP:
            return "UNVERIFIED_IP_OWNERSHIP";
          case CapabilityHealthReason::INITIALIZING_DATAPLANE:
            return "INITIALIZING_DATAPLANE";
          case CapabilityHealthReason::DATAPLANE_FAILURE:
            return "DATAPLANE_FAILURE";
          case CapabilityHealthReason::HEALTHY:
            return "HEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityHealthReasonMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
