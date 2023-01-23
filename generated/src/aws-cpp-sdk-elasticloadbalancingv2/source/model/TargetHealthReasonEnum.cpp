/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TargetHealthReasonEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace TargetHealthReasonEnumMapper
      {

        static const int Elb_RegistrationInProgress_HASH = HashingUtils::HashString("Elb.RegistrationInProgress");
        static const int Elb_InitialHealthChecking_HASH = HashingUtils::HashString("Elb.InitialHealthChecking");
        static const int Target_ResponseCodeMismatch_HASH = HashingUtils::HashString("Target.ResponseCodeMismatch");
        static const int Target_Timeout_HASH = HashingUtils::HashString("Target.Timeout");
        static const int Target_FailedHealthChecks_HASH = HashingUtils::HashString("Target.FailedHealthChecks");
        static const int Target_NotRegistered_HASH = HashingUtils::HashString("Target.NotRegistered");
        static const int Target_NotInUse_HASH = HashingUtils::HashString("Target.NotInUse");
        static const int Target_DeregistrationInProgress_HASH = HashingUtils::HashString("Target.DeregistrationInProgress");
        static const int Target_InvalidState_HASH = HashingUtils::HashString("Target.InvalidState");
        static const int Target_IpUnusable_HASH = HashingUtils::HashString("Target.IpUnusable");
        static const int Target_HealthCheckDisabled_HASH = HashingUtils::HashString("Target.HealthCheckDisabled");
        static const int Elb_InternalError_HASH = HashingUtils::HashString("Elb.InternalError");


        TargetHealthReasonEnum GetTargetHealthReasonEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Elb_RegistrationInProgress_HASH)
          {
            return TargetHealthReasonEnum::Elb_RegistrationInProgress;
          }
          else if (hashCode == Elb_InitialHealthChecking_HASH)
          {
            return TargetHealthReasonEnum::Elb_InitialHealthChecking;
          }
          else if (hashCode == Target_ResponseCodeMismatch_HASH)
          {
            return TargetHealthReasonEnum::Target_ResponseCodeMismatch;
          }
          else if (hashCode == Target_Timeout_HASH)
          {
            return TargetHealthReasonEnum::Target_Timeout;
          }
          else if (hashCode == Target_FailedHealthChecks_HASH)
          {
            return TargetHealthReasonEnum::Target_FailedHealthChecks;
          }
          else if (hashCode == Target_NotRegistered_HASH)
          {
            return TargetHealthReasonEnum::Target_NotRegistered;
          }
          else if (hashCode == Target_NotInUse_HASH)
          {
            return TargetHealthReasonEnum::Target_NotInUse;
          }
          else if (hashCode == Target_DeregistrationInProgress_HASH)
          {
            return TargetHealthReasonEnum::Target_DeregistrationInProgress;
          }
          else if (hashCode == Target_InvalidState_HASH)
          {
            return TargetHealthReasonEnum::Target_InvalidState;
          }
          else if (hashCode == Target_IpUnusable_HASH)
          {
            return TargetHealthReasonEnum::Target_IpUnusable;
          }
          else if (hashCode == Target_HealthCheckDisabled_HASH)
          {
            return TargetHealthReasonEnum::Target_HealthCheckDisabled;
          }
          else if (hashCode == Elb_InternalError_HASH)
          {
            return TargetHealthReasonEnum::Elb_InternalError;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetHealthReasonEnum>(hashCode);
          }

          return TargetHealthReasonEnum::NOT_SET;
        }

        Aws::String GetNameForTargetHealthReasonEnum(TargetHealthReasonEnum enumValue)
        {
          switch(enumValue)
          {
          case TargetHealthReasonEnum::Elb_RegistrationInProgress:
            return "Elb.RegistrationInProgress";
          case TargetHealthReasonEnum::Elb_InitialHealthChecking:
            return "Elb.InitialHealthChecking";
          case TargetHealthReasonEnum::Target_ResponseCodeMismatch:
            return "Target.ResponseCodeMismatch";
          case TargetHealthReasonEnum::Target_Timeout:
            return "Target.Timeout";
          case TargetHealthReasonEnum::Target_FailedHealthChecks:
            return "Target.FailedHealthChecks";
          case TargetHealthReasonEnum::Target_NotRegistered:
            return "Target.NotRegistered";
          case TargetHealthReasonEnum::Target_NotInUse:
            return "Target.NotInUse";
          case TargetHealthReasonEnum::Target_DeregistrationInProgress:
            return "Target.DeregistrationInProgress";
          case TargetHealthReasonEnum::Target_InvalidState:
            return "Target.InvalidState";
          case TargetHealthReasonEnum::Target_IpUnusable:
            return "Target.IpUnusable";
          case TargetHealthReasonEnum::Target_HealthCheckDisabled:
            return "Target.HealthCheckDisabled";
          case TargetHealthReasonEnum::Elb_InternalError:
            return "Elb.InternalError";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetHealthReasonEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
