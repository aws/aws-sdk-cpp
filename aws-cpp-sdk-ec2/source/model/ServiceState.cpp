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

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ServiceState GetServiceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
