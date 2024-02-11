/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace VpcConnectionStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int DEACTIVATING_HASH = HashingUtils::HashString("DEACTIVATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int REJECTING_HASH = HashingUtils::HashString("REJECTING");


        VpcConnectionState GetVpcConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return VpcConnectionState::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return VpcConnectionState::AVAILABLE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return VpcConnectionState::INACTIVE;
          }
          else if (hashCode == DEACTIVATING_HASH)
          {
            return VpcConnectionState::DEACTIVATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VpcConnectionState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VpcConnectionState::FAILED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return VpcConnectionState::REJECTED;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return VpcConnectionState::REJECTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcConnectionState>(hashCode);
          }

          return VpcConnectionState::NOT_SET;
        }

        Aws::String GetNameForVpcConnectionState(VpcConnectionState enumValue)
        {
          switch(enumValue)
          {
          case VpcConnectionState::NOT_SET:
            return {};
          case VpcConnectionState::CREATING:
            return "CREATING";
          case VpcConnectionState::AVAILABLE:
            return "AVAILABLE";
          case VpcConnectionState::INACTIVE:
            return "INACTIVE";
          case VpcConnectionState::DEACTIVATING:
            return "DEACTIVATING";
          case VpcConnectionState::DELETING:
            return "DELETING";
          case VpcConnectionState::FAILED:
            return "FAILED";
          case VpcConnectionState::REJECTED:
            return "REJECTED";
          case VpcConnectionState::REJECTING:
            return "REJECTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcConnectionStateMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
