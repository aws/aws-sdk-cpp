/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ClusterStateChangeReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace ClusterStateChangeReasonCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t INSTANCE_FAILURE_HASH = ConstExprHashingUtils::HashString("INSTANCE_FAILURE");
        static constexpr uint32_t INSTANCE_FLEET_TIMEOUT_HASH = ConstExprHashingUtils::HashString("INSTANCE_FLEET_TIMEOUT");
        static constexpr uint32_t BOOTSTRAP_FAILURE_HASH = ConstExprHashingUtils::HashString("BOOTSTRAP_FAILURE");
        static constexpr uint32_t USER_REQUEST_HASH = ConstExprHashingUtils::HashString("USER_REQUEST");
        static constexpr uint32_t STEP_FAILURE_HASH = ConstExprHashingUtils::HashString("STEP_FAILURE");
        static constexpr uint32_t ALL_STEPS_COMPLETED_HASH = ConstExprHashingUtils::HashString("ALL_STEPS_COMPLETED");


        ClusterStateChangeReasonCode GetClusterStateChangeReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ClusterStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return ClusterStateChangeReasonCode::VALIDATION_ERROR;
          }
          else if (hashCode == INSTANCE_FAILURE_HASH)
          {
            return ClusterStateChangeReasonCode::INSTANCE_FAILURE;
          }
          else if (hashCode == INSTANCE_FLEET_TIMEOUT_HASH)
          {
            return ClusterStateChangeReasonCode::INSTANCE_FLEET_TIMEOUT;
          }
          else if (hashCode == BOOTSTRAP_FAILURE_HASH)
          {
            return ClusterStateChangeReasonCode::BOOTSTRAP_FAILURE;
          }
          else if (hashCode == USER_REQUEST_HASH)
          {
            return ClusterStateChangeReasonCode::USER_REQUEST;
          }
          else if (hashCode == STEP_FAILURE_HASH)
          {
            return ClusterStateChangeReasonCode::STEP_FAILURE;
          }
          else if (hashCode == ALL_STEPS_COMPLETED_HASH)
          {
            return ClusterStateChangeReasonCode::ALL_STEPS_COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterStateChangeReasonCode>(hashCode);
          }

          return ClusterStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForClusterStateChangeReasonCode(ClusterStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case ClusterStateChangeReasonCode::NOT_SET:
            return {};
          case ClusterStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ClusterStateChangeReasonCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case ClusterStateChangeReasonCode::INSTANCE_FAILURE:
            return "INSTANCE_FAILURE";
          case ClusterStateChangeReasonCode::INSTANCE_FLEET_TIMEOUT:
            return "INSTANCE_FLEET_TIMEOUT";
          case ClusterStateChangeReasonCode::BOOTSTRAP_FAILURE:
            return "BOOTSTRAP_FAILURE";
          case ClusterStateChangeReasonCode::USER_REQUEST:
            return "USER_REQUEST";
          case ClusterStateChangeReasonCode::STEP_FAILURE:
            return "STEP_FAILURE";
          case ClusterStateChangeReasonCode::ALL_STEPS_COMPLETED:
            return "ALL_STEPS_COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
