/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetStateChangeReasonCode.h>
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
      namespace InstanceFleetStateChangeReasonCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t INSTANCE_FAILURE_HASH = ConstExprHashingUtils::HashString("INSTANCE_FAILURE");
        static constexpr uint32_t CLUSTER_TERMINATED_HASH = ConstExprHashingUtils::HashString("CLUSTER_TERMINATED");


        InstanceFleetStateChangeReasonCode GetInstanceFleetStateChangeReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return InstanceFleetStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return InstanceFleetStateChangeReasonCode::VALIDATION_ERROR;
          }
          else if (hashCode == INSTANCE_FAILURE_HASH)
          {
            return InstanceFleetStateChangeReasonCode::INSTANCE_FAILURE;
          }
          else if (hashCode == CLUSTER_TERMINATED_HASH)
          {
            return InstanceFleetStateChangeReasonCode::CLUSTER_TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceFleetStateChangeReasonCode>(hashCode);
          }

          return InstanceFleetStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForInstanceFleetStateChangeReasonCode(InstanceFleetStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceFleetStateChangeReasonCode::NOT_SET:
            return {};
          case InstanceFleetStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case InstanceFleetStateChangeReasonCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case InstanceFleetStateChangeReasonCode::INSTANCE_FAILURE:
            return "INSTANCE_FAILURE";
          case InstanceFleetStateChangeReasonCode::CLUSTER_TERMINATED:
            return "CLUSTER_TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceFleetStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
