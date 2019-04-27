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

#include <aws/medialive/model/InputClass.h>
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
      namespace InputClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int SINGLE_PIPELINE_HASH = HashingUtils::HashString("SINGLE_PIPELINE");


        InputClass GetInputClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return InputClass::STANDARD;
          }
          else if (hashCode == SINGLE_PIPELINE_HASH)
          {
            return InputClass::SINGLE_PIPELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputClass>(hashCode);
          }

          return InputClass::NOT_SET;
        }

        Aws::String GetNameForInputClass(InputClass enumValue)
        {
          switch(enumValue)
          {
          case InputClass::STANDARD:
            return "STANDARD";
          case InputClass::SINGLE_PIPELINE:
            return "SINGLE_PIPELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputClassMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
