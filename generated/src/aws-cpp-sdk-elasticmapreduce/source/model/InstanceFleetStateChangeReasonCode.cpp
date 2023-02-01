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

        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int INSTANCE_FAILURE_HASH = HashingUtils::HashString("INSTANCE_FAILURE");
        static const int CLUSTER_TERMINATED_HASH = HashingUtils::HashString("CLUSTER_TERMINATED");


        InstanceFleetStateChangeReasonCode GetInstanceFleetStateChangeReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
