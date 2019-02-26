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

#include <aws/mediaconvert/model/InputRotate.h>
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
      namespace InputRotateMapper
      {

        static const int DEGREE_0_HASH = HashingUtils::HashString("DEGREE_0");
        static const int DEGREES_90_HASH = HashingUtils::HashString("DEGREES_90");
        static const int DEGREES_180_HASH = HashingUtils::HashString("DEGREES_180");
        static const int DEGREES_270_HASH = HashingUtils::HashString("DEGREES_270");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        InputRotate GetInputRotateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEGREE_0_HASH)
          {
            return InputRotate::DEGREE_0;
          }
          else if (hashCode == DEGREES_90_HASH)
          {
            return InputRotate::DEGREES_90;
          }
          else if (hashCode == DEGREES_180_HASH)
          {
            return InputRotate::DEGREES_180;
          }
          else if (hashCode == DEGREES_270_HASH)
          {
            return InputRotate::DEGREES_270;
          }
          else if (hashCode == AUTO_HASH)
          {
            return InputRotate::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputRotate>(hashCode);
          }

          return InputRotate::NOT_SET;
        }

        Aws::String GetNameForInputRotate(InputRotate enumValue)
        {
          switch(enumValue)
          {
          case InputRotate::DEGREE_0:
            return "DEGREE_0";
          case InputRotate::DEGREES_90:
            return "DEGREES_90";
          case InputRotate::DEGREES_180:
            return "DEGREES_180";
          case InputRotate::DEGREES_270:
            return "DEGREES_270";
          case InputRotate::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputRotateMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
