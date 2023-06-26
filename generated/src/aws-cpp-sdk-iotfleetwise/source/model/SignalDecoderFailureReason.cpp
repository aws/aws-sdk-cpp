/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalDecoderFailureReason.h>
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
      namespace SignalDecoderFailureReasonMapper
      {

        static const int DUPLICATE_SIGNAL_HASH = HashingUtils::HashString("DUPLICATE_SIGNAL");
        static const int CONFLICTING_SIGNAL_HASH = HashingUtils::HashString("CONFLICTING_SIGNAL");
        static const int SIGNAL_TO_ADD_ALREADY_EXISTS_HASH = HashingUtils::HashString("SIGNAL_TO_ADD_ALREADY_EXISTS");
        static const int SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE_HASH = HashingUtils::HashString("SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE");
        static const int NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE_HASH = HashingUtils::HashString("NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE");
        static const int SIGNAL_NOT_IN_MODEL_HASH = HashingUtils::HashString("SIGNAL_NOT_IN_MODEL");
        static const int CAN_SIGNAL_INFO_IS_NULL_HASH = HashingUtils::HashString("CAN_SIGNAL_INFO_IS_NULL");
        static const int OBD_SIGNAL_INFO_IS_NULL_HASH = HashingUtils::HashString("OBD_SIGNAL_INFO_IS_NULL");
        static const int NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL_HASH = HashingUtils::HashString("NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL");


        SignalDecoderFailureReason GetSignalDecoderFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DUPLICATE_SIGNAL_HASH)
          {
            return SignalDecoderFailureReason::DUPLICATE_SIGNAL;
          }
          else if (hashCode == CONFLICTING_SIGNAL_HASH)
          {
            return SignalDecoderFailureReason::CONFLICTING_SIGNAL;
          }
          else if (hashCode == SIGNAL_TO_ADD_ALREADY_EXISTS_HASH)
          {
            return SignalDecoderFailureReason::SIGNAL_TO_ADD_ALREADY_EXISTS;
          }
          else if (hashCode == SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE_HASH)
          {
            return SignalDecoderFailureReason::SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE;
          }
          else if (hashCode == NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE_HASH)
          {
            return SignalDecoderFailureReason::NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE;
          }
          else if (hashCode == SIGNAL_NOT_IN_MODEL_HASH)
          {
            return SignalDecoderFailureReason::SIGNAL_NOT_IN_MODEL;
          }
          else if (hashCode == CAN_SIGNAL_INFO_IS_NULL_HASH)
          {
            return SignalDecoderFailureReason::CAN_SIGNAL_INFO_IS_NULL;
          }
          else if (hashCode == OBD_SIGNAL_INFO_IS_NULL_HASH)
          {
            return SignalDecoderFailureReason::OBD_SIGNAL_INFO_IS_NULL;
          }
          else if (hashCode == NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL_HASH)
          {
            return SignalDecoderFailureReason::NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalDecoderFailureReason>(hashCode);
          }

          return SignalDecoderFailureReason::NOT_SET;
        }

        Aws::String GetNameForSignalDecoderFailureReason(SignalDecoderFailureReason enumValue)
        {
          switch(enumValue)
          {
          case SignalDecoderFailureReason::DUPLICATE_SIGNAL:
            return "DUPLICATE_SIGNAL";
          case SignalDecoderFailureReason::CONFLICTING_SIGNAL:
            return "CONFLICTING_SIGNAL";
          case SignalDecoderFailureReason::SIGNAL_TO_ADD_ALREADY_EXISTS:
            return "SIGNAL_TO_ADD_ALREADY_EXISTS";
          case SignalDecoderFailureReason::SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE:
            return "SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE";
          case SignalDecoderFailureReason::NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE:
            return "NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE";
          case SignalDecoderFailureReason::SIGNAL_NOT_IN_MODEL:
            return "SIGNAL_NOT_IN_MODEL";
          case SignalDecoderFailureReason::CAN_SIGNAL_INFO_IS_NULL:
            return "CAN_SIGNAL_INFO_IS_NULL";
          case SignalDecoderFailureReason::OBD_SIGNAL_INFO_IS_NULL:
            return "OBD_SIGNAL_INFO_IS_NULL";
          case SignalDecoderFailureReason::NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL:
            return "NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalDecoderFailureReasonMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
