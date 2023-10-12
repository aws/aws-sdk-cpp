/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReasonCode.h>
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
      namespace InstanceGroupStateChangeReasonCodeMapper
      {

        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");
        static constexpr uint32_t VALIDATION_ERROR_HASH = ConstExprHashingUtils::HashString("VALIDATION_ERROR");
        static constexpr uint32_t INSTANCE_FAILURE_HASH = ConstExprHashingUtils::HashString("INSTANCE_FAILURE");
        static constexpr uint32_t CLUSTER_TERMINATED_HASH = ConstExprHashingUtils::HashString("CLUSTER_TERMINATED");


        InstanceGroupStateChangeReasonCode GetInstanceGroupStateChangeReasonCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_ERROR_HASH)
          {
            return InstanceGroupStateChangeReasonCode::INTERNAL_ERROR;
          }
          else if (hashCode == VALIDATION_ERROR_HASH)
          {
            return InstanceGroupStateChangeReasonCode::VALIDATION_ERROR;
          }
          else if (hashCode == INSTANCE_FAILURE_HASH)
          {
            return InstanceGroupStateChangeReasonCode::INSTANCE_FAILURE;
          }
          else if (hashCode == CLUSTER_TERMINATED_HASH)
          {
            return InstanceGroupStateChangeReasonCode::CLUSTER_TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceGroupStateChangeReasonCode>(hashCode);
          }

          return InstanceGroupStateChangeReasonCode::NOT_SET;
        }

        Aws::String GetNameForInstanceGroupStateChangeReasonCode(InstanceGroupStateChangeReasonCode enumValue)
        {
          switch(enumValue)
          {
          case InstanceGroupStateChangeReasonCode::NOT_SET:
            return {};
          case InstanceGroupStateChangeReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case InstanceGroupStateChangeReasonCode::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case InstanceGroupStateChangeReasonCode::INSTANCE_FAILURE:
            return "INSTANCE_FAILURE";
          case InstanceGroupStateChangeReasonCode::CLUSTER_TERMINATED:
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

      } // namespace InstanceGroupStateChangeReasonCodeMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
