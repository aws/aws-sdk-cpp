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
