/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceState.h>
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
      namespace InputDeviceStateMapper
      {

        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int STREAMING_HASH = HashingUtils::HashString("STREAMING");


        InputDeviceState GetInputDeviceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return InputDeviceState::IDLE;
          }
          else if (hashCode == STREAMING_HASH)
          {
            return InputDeviceState::STREAMING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceState>(hashCode);
          }

          return InputDeviceState::NOT_SET;
        }

        Aws::String GetNameForInputDeviceState(InputDeviceState enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceState::IDLE:
            return "IDLE";
          case InputDeviceState::STREAMING:
            return "STREAMING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
