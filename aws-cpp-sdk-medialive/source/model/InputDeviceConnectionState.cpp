/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputDeviceConnectionStateMapper
      {

        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");


        InputDeviceConnectionState GetInputDeviceConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISCONNECTED_HASH)
          {
            return InputDeviceConnectionState::DISCONNECTED;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return InputDeviceConnectionState::CONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceConnectionState>(hashCode);
          }

          return InputDeviceConnectionState::NOT_SET;
        }

        Aws::String GetNameForInputDeviceConnectionState(InputDeviceConnectionState enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          case InputDeviceConnectionState::CONNECTED:
            return "CONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceConnectionStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
