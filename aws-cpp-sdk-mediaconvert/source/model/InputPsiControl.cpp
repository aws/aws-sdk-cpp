/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
