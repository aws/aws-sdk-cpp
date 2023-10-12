/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceState.h>
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
      namespace ServiceStateMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Deleted_HASH = ConstExprHashingUtils::HashString("Deleted");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        ServiceState GetServiceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ServiceState::Pending;
          }
          else if (hashCode == Available_HASH)
          {
            return ServiceState::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ServiceState::Deleting;
          }
          else if (hashCode == Deleted_HASH)
          {
            return ServiceState::Deleted;
          }
          else if (hashCode == Failed_HASH)
          {
            return ServiceState::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceState>(hashCode);
          }

          return ServiceState::NOT_SET;
        }

        Aws::String GetNameForServiceState(ServiceState enumValue)
        {
          switch(enumValue)
          {
          case ServiceState::NOT_SET:
            return {};
          case ServiceState::Pending:
            return "Pending";
          case ServiceState::Available:
            return "Available";
          case ServiceState::Deleting:
            return "Deleting";
          case ServiceState::Deleted:
            return "Deleted";
          case ServiceState::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
