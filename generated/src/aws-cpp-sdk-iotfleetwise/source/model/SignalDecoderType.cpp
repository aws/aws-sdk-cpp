/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/SignalDecoderType.h>
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
      namespace SignalDecoderTypeMapper
      {

        static const int CAN_SIGNAL_HASH = HashingUtils::HashString("CAN_SIGNAL");
        static const int OBD_SIGNAL_HASH = HashingUtils::HashString("OBD_SIGNAL");


        SignalDecoderType GetSignalDecoderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CAN_SIGNAL_HASH)
          {
            return SignalDecoderType::CAN_SIGNAL;
          }
          else if (hashCode == OBD_SIGNAL_HASH)
          {
            return SignalDecoderType::OBD_SIGNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalDecoderType>(hashCode);
          }

          return SignalDecoderType::NOT_SET;
        }

        Aws::String GetNameForSignalDecoderType(SignalDecoderType enumValue)
        {
          switch(enumValue)
          {
          case SignalDecoderType::CAN_SIGNAL:
            return "CAN_SIGNAL";
          case SignalDecoderType::OBD_SIGNAL:
            return "OBD_SIGNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SignalDecoderTypeMapper
    } // namespace Model
  } // namespace IoTFleetWise
} // namespace Aws
