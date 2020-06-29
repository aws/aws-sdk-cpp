/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputDeviceScanType.h>
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
      namespace InputDeviceScanTypeMapper
      {

        static const int INTERLACED_HASH = HashingUtils::HashString("INTERLACED");
        static const int PROGRESSIVE_HASH = HashingUtils::HashString("PROGRESSIVE");


        InputDeviceScanType GetInputDeviceScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERLACED_HASH)
          {
            return InputDeviceScanType::INTERLACED;
          }
          else if (hashCode == PROGRESSIVE_HASH)
          {
            return InputDeviceScanType::PROGRESSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputDeviceScanType>(hashCode);
          }

          return InputDeviceScanType::NOT_SET;
        }

        Aws::String GetNameForInputDeviceScanType(InputDeviceScanType enumValue)
        {
          switch(enumValue)
          {
          case InputDeviceScanType::INTERLACED:
            return "INTERLACED";
          case InputDeviceScanType::PROGRESSIVE:
            return "PROGRESSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputDeviceScanTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
