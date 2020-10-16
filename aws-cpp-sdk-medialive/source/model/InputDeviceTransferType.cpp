/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceTransferType.h>
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
      namespace InputDeviceTransferTypeMapper
      {

        static const int OUTGOING_HASH = HashingUtils::HashString("OUTGOING");
        static const int INCOMING_HASH = HashingUtils::HashString("INCOMING");


        InputDeviceTransferType GetInputDeviceTransferTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OUTGOING_HASH)
          {
            return InputDeviceTransferType::OUTGOING;
          }
          else if (hashCode == INCOMING_HASH)
          {
            return InputDeviceTransferType::INCOMING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceTransferType>(hashCode);
          }

          return InputDeviceTransferType::NOT_SET;
        }

        Aws::String GetNameForInputDeviceTransferType(InputDeviceTransferType enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceTransferType::OUTGOING:
            return "OUTGOING";
          case InputDeviceTransferType::INCOMING:
            return "INCOMING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceTransferTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
