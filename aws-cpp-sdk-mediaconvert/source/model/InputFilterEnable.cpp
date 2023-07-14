/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputFilterEnable.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace InputFilterEnableMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");
        static const int FORCE_HASH = HashingUtils::HashString("FORCE");


        InputFilterEnable GetInputFilterEnableForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return InputFilterEnable::AUTO;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return InputFilterEnable::DISABLE;
          }
          else if (hashCode == FORCE_HASH)
          {
            return InputFilterEnable::FORCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputFilterEnable>(hashCode);
          }

          return InputFilterEnable::NOT_SET;
        }

        Aws::String GetNameForInputFilterEnable(InputFilterEnable enumValue)
        {
          switch(enumValue)
          {
          case InputFilterEnable::AUTO:
            return "AUTO";
          case InputFilterEnable::DISABLE:
            return "DISABLE";
          case InputFilterEnable::FORCE:
            return "FORCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputFilterEnableMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
