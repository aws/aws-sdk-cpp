/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetState.h>
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
      namespace SubnetStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int failed_insufficient_capacity_HASH = HashingUtils::HashString("failed-insufficient-capacity");


        SubnetState GetSubnetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return SubnetState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return SubnetState::available;
          }
          else if (hashCode == unavailable_HASH)
          {
            return SubnetState::unavailable;
          }
          else if (hashCode == failed_HASH)
          {
            return SubnetState::failed;
          }
          else if (hashCode == failed_insufficient_capacity_HASH)
          {
            return SubnetState::failed_insufficient_capacity;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubnetState>(hashCode);
          }

          return SubnetState::NOT_SET;
        }

        Aws::String GetNameForSubnetState(SubnetState enumValue)
        {
          switch(enumValue)
          {
          case SubnetState::NOT_SET:
            return {};
          case SubnetState::pending:
            return "pending";
          case SubnetState::available:
            return "available";
          case SubnetState::unavailable:
            return "unavailable";
          case SubnetState::failed:
            return "failed";
          case SubnetState::failed_insufficient_capacity:
            return "failed-insufficient-capacity";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubnetStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
