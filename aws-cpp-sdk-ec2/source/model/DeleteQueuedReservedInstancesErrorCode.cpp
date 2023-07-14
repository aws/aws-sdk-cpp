/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteQueuedReservedInstancesErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DeleteQueuedReservedInstancesErrorCodeMapper
      {

        static const int reserved_instances_id_invalid_HASH = HashingUtils::HashString("reserved-instances-id-invalid");
        static const int reserved_instances_not_in_queued_state_HASH = HashingUtils::HashString("reserved-instances-not-in-queued-state");
        static const int unexpected_error_HASH = HashingUtils::HashString("unexpected-error");


        DeleteQueuedReservedInstancesErrorCode GetDeleteQueuedReservedInstancesErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == reserved_instances_id_invalid_HASH)
          {
            return DeleteQueuedReservedInstancesErrorCode::reserved_instances_id_invalid;
          }
          else if (hashCode == reserved_instances_not_in_queued_state_HASH)
          {
            return DeleteQueuedReservedInstancesErrorCode::reserved_instances_not_in_queued_state;
          }
          else if (hashCode == unexpected_error_HASH)
          {
            return DeleteQueuedReservedInstancesErrorCode::unexpected_error;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeleteQueuedReservedInstancesErrorCode>(hashCode);
          }

          return DeleteQueuedReservedInstancesErrorCode::NOT_SET;
        }

        Aws::String GetNameForDeleteQueuedReservedInstancesErrorCode(DeleteQueuedReservedInstancesErrorCode enumValue)
        {
          switch(enumValue)
          {
          case DeleteQueuedReservedInstancesErrorCode::reserved_instances_id_invalid:
            return "reserved-instances-id-invalid";
          case DeleteQueuedReservedInstancesErrorCode::reserved_instances_not_in_queued_state:
            return "reserved-instances-not-in-queued-state";
          case DeleteQueuedReservedInstancesErrorCode::unexpected_error:
            return "unexpected-error";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeleteQueuedReservedInstancesErrorCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
