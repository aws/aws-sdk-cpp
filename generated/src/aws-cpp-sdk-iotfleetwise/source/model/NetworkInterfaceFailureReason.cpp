/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/NetworkInterfaceFailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTFleetWise
  {
    namespace Model
    {
      namespace NetworkInterfaceFailureReasonMapper
      {

        static const int DUPLICATE_NETWORK_INTERFACE_HASH = HashingUtils::HashString("DUPLICATE_NETWORK_INTERFACE");
        static const int CONFLICTING_NETWORK_INTERFACE_HASH = HashingUtils::HashString("CONFLICTING_NETWORK_INTERFACE");
        static const int NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS_HASH = HashingUtils::HashString("NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS");
        static const int CAN_NETWORK_INTERFACE_INFO_IS_NULL_HASH = HashingUtils::HashString("CAN_NETWORK_INTERFACE_INFO_IS_NULL");
        static const int OBD_NETWORK_INTERFACE_INFO_IS_NULL_HASH = HashingUtils::HashString("OBD_NETWORK_INTERFACE_INFO_IS_NULL");
        static const int NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS_HASH = HashingUtils::HashString("NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS");


        NetworkInterfaceFailureReason GetNetworkInterfaceFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_NETWORK_INTERFACE_HASH)
          {
            return NetworkInterfaceFailureReason::DUPLICATE_NETWORK_INTERFACE;
          }
          else if (hashCode == CONFLICTING_NETWORK_INTERFACE_HASH)
          {
            return NetworkInterfaceFailureReason::CONFLICTING_NETWORK_INTERFACE;
          }
          else if (hashCode == NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS_HASH)
          {
            return NetworkInterfaceFailureReason::NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS;
          }
          else if (hashCode == CAN_NETWORK_INTERFACE_INFO_IS_NULL_HASH)
          {
            return NetworkInterfaceFailureReason::CAN_NETWORK_INTERFACE_INFO_IS_NULL;
          }
          else if (hashCode == OBD_NETWORK_INTERFACE_INFO_IS_NULL_HASH)
          {
            return NetworkInterfaceFailureReason::OBD_NETWORK_INTERFACE_INFO_IS_NULL;
          }
          else if (hashCode == NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS_HASH)
          {
            return NetworkInterfaceFailureReason::NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceFailureReason>(hashCode);
          }

          return NetworkInterfaceFailureReason::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceFailureReason(NetworkInterfaceFailureReason enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceFailureReason::DUPLICATE_NETWORK_INTERFACE:
            return "DUPLICATE_NETWORK_INTERFACE";
          case NetworkInterfaceFailureReason::CONFLICTING_NETWORK_INTERFACE:
            return "CONFLICTING_NETWORK_INTERFACE";
          case NetworkInterfaceFailureReason::NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS:
            return "NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS";
          case NetworkInterfaceFailureReason::CAN_NETWORK_INTERFACE_INFO_IS_NULL:
            return "CAN_NETWORK_INTERFACE_INFO_IS_NULL";
          case NetworkInterfaceFailureReason::OBD_NETWORK_INTERFACE_INFO_IS_NULL:
            return "OBD_NETWORK_INTERFACE_INFO_IS_NULL";
          case NetworkInterfaceFailureReason::NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS:
            return "NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceFailureReasonMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
