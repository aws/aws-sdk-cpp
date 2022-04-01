/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputPsiControl.h>
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
      namespace InputPsiControlMapper
      {

        static const int IGNORE_PSI_HASH = HashingUtils::HashString("IGNORE_PSI");
        static const int USE_PSI_HASH = HashingUtils::HashString("USE_PSI");


        InputPsiControl GetInputPsiControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_PSI_HASH)
          {
            return InputPsiControl::IGNORE_PSI;
          }
          else if (hashCode == USE_PSI_HASH)
          {
            return InputPsiControl::USE_PSI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputPsiControl>(hashCode);
          }

          return InputPsiControl::NOT_SET;
        }

        Aws::String GetNameForInputPsiControl(InputPsiControl enumValue)
        {
          switch(enumValue)
          {
          case InputPsiControl::IGNORE_PSI:
            return "IGNORE_PSI";
          case InputPsiControl::USE_PSI:
            return "USE_PSI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputPsiControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
