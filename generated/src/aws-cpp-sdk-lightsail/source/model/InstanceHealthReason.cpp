/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/InstanceHealthReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace InstanceHealthReasonMapper
      {

        static const int Lb_RegistrationInProgress_HASH = HashingUtils::HashString("Lb.RegistrationInProgress");
        static const int Lb_InitialHealthChecking_HASH = HashingUtils::HashString("Lb.InitialHealthChecking");
        static const int Lb_InternalError_HASH = HashingUtils::HashString("Lb.InternalError");
        static const int Instance_ResponseCodeMismatch_HASH = HashingUtils::HashString("Instance.ResponseCodeMismatch");
        static const int Instance_Timeout_HASH = HashingUtils::HashString("Instance.Timeout");
        static const int Instance_FailedHealthChecks_HASH = HashingUtils::HashString("Instance.FailedHealthChecks");
        static const int Instance_NotRegistered_HASH = HashingUtils::HashString("Instance.NotRegistered");
        static const int Instance_NotInUse_HASH = HashingUtils::HashString("Instance.NotInUse");
        static const int Instance_DeregistrationInProgress_HASH = HashingUtils::HashString("Instance.DeregistrationInProgress");
        static const int Instance_InvalidState_HASH = HashingUtils::HashString("Instance.InvalidState");
        static const int Instance_IpUnusable_HASH = HashingUtils::HashString("Instance.IpUnusable");


        InstanceHealthReason GetInstanceHealthReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Lb_RegistrationInProgress_HASH)
          {
            return InstanceHealthReason::Lb_RegistrationInProgress;
          }
          else if (hashCode == Lb_InitialHealthChecking_HASH)
          {
            return InstanceHealthReason::Lb_InitialHealthChecking;
          }
          else if (hashCode == Lb_InternalError_HASH)
          {
            return InstanceHealthReason::Lb_InternalError;
          }
          else if (hashCode == Instance_ResponseCodeMismatch_HASH)
          {
            return InstanceHealthReason::Instance_ResponseCodeMismatch;
          }
          else if (hashCode == Instance_Timeout_HASH)
          {
            return InstanceHealthReason::Instance_Timeout;
          }
          else if (hashCode == Instance_FailedHealthChecks_HASH)
          {
            return InstanceHealthReason::Instance_FailedHealthChecks;
          }
          else if (hashCode == Instance_NotRegistered_HASH)
          {
            return InstanceHealthReason::Instance_NotRegistered;
          }
          else if (hashCode == Instance_NotInUse_HASH)
          {
            return InstanceHealthReason::Instance_NotInUse;
          }
          else if (hashCode == Instance_DeregistrationInProgress_HASH)
          {
            return InstanceHealthReason::Instance_DeregistrationInProgress;
          }
          else if (hashCode == Instance_InvalidState_HASH)
          {
            return InstanceHealthReason::Instance_InvalidState;
          }
          else if (hashCode == Instance_IpUnusable_HASH)
          {
            return InstanceHealthReason::Instance_IpUnusable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceHealthReason>(hashCode);
          }

          return InstanceHealthReason::NOT_SET;
        }

        Aws::String GetNameForInstanceHealthReason(InstanceHealthReason enumValue)
        {
          switch(enumValue)
          {
          case InstanceHealthReason::Lb_RegistrationInProgress:
            return "Lb.RegistrationInProgress";
          case InstanceHealthReason::Lb_InitialHealthChecking:
            return "Lb.InitialHealthChecking";
          case InstanceHealthReason::Lb_InternalError:
            return "Lb.InternalError";
          case InstanceHealthReason::Instance_ResponseCodeMismatch:
            return "Instance.ResponseCodeMismatch";
          case InstanceHealthReason::Instance_Timeout:
            return "Instance.Timeout";
          case InstanceHealthReason::Instance_FailedHealthChecks:
            return "Instance.FailedHealthChecks";
          case InstanceHealthReason::Instance_NotRegistered:
            return "Instance.NotRegistered";
          case InstanceHealthReason::Instance_NotInUse:
            return "Instance.NotInUse";
          case InstanceHealthReason::Instance_DeregistrationInProgress:
            return "Instance.DeregistrationInProgress";
          case InstanceHealthReason::Instance_InvalidState:
            return "Instance.InvalidState";
          case InstanceHealthReason::Instance_IpUnusable:
            return "Instance.IpUnusable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceHealthReasonMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
