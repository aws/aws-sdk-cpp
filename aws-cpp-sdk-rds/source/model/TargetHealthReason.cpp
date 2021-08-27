/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TargetHealthReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace TargetHealthReasonMapper
      {

        static const int UNREACHABLE_HASH = HashingUtils::HashString("UNREACHABLE");
        static const int CONNECTION_FAILED_HASH = HashingUtils::HashString("CONNECTION_FAILED");
        static const int AUTH_FAILURE_HASH = HashingUtils::HashString("AUTH_FAILURE");
        static const int PENDING_PROXY_CAPACITY_HASH = HashingUtils::HashString("PENDING_PROXY_CAPACITY");


        TargetHealthReason GetTargetHealthReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNREACHABLE_HASH)
          {
            return TargetHealthReason::UNREACHABLE;
          }
          else if (hashCode == CONNECTION_FAILED_HASH)
          {
            return TargetHealthReason::CONNECTION_FAILED;
          }
          else if (hashCode == AUTH_FAILURE_HASH)
          {
            return TargetHealthReason::AUTH_FAILURE;
          }
          else if (hashCode == PENDING_PROXY_CAPACITY_HASH)
          {
            return TargetHealthReason::PENDING_PROXY_CAPACITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetHealthReason>(hashCode);
          }

          return TargetHealthReason::NOT_SET;
        }

        Aws::String GetNameForTargetHealthReason(TargetHealthReason enumValue)
        {
          switch(enumValue)
          {
          case TargetHealthReason::UNREACHABLE:
            return "UNREACHABLE";
          case TargetHealthReason::CONNECTION_FAILED:
            return "CONNECTION_FAILED";
          case TargetHealthReason::AUTH_FAILURE:
            return "AUTH_FAILURE";
          case TargetHealthReason::PENDING_PROXY_CAPACITY:
            return "PENDING_PROXY_CAPACITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetHealthReasonMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
