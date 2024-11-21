/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockExtensionStatus.h>
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
      namespace CapacityBlockExtensionStatusMapper
      {

        static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
        static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");
        static const int payment_succeeded_HASH = HashingUtils::HashString("payment-succeeded");


        CapacityBlockExtensionStatus GetCapacityBlockExtensionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == payment_pending_HASH)
          {
            return CapacityBlockExtensionStatus::payment_pending;
          }
          else if (hashCode == payment_failed_HASH)
          {
            return CapacityBlockExtensionStatus::payment_failed;
          }
          else if (hashCode == payment_succeeded_HASH)
          {
            return CapacityBlockExtensionStatus::payment_succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityBlockExtensionStatus>(hashCode);
          }

          return CapacityBlockExtensionStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityBlockExtensionStatus(CapacityBlockExtensionStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityBlockExtensionStatus::NOT_SET:
            return {};
          case CapacityBlockExtensionStatus::payment_pending:
            return "payment-pending";
          case CapacityBlockExtensionStatus::payment_failed:
            return "payment-failed";
          case CapacityBlockExtensionStatus::payment_succeeded:
            return "payment-succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityBlockExtensionStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
