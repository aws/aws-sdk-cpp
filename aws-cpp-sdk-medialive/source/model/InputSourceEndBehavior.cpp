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

#include <aws/medialive/model/InputSourceEndBehavior.h>
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
      namespace InputSourceEndBehaviorMapper
      {

        static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");
        static const int LOOP_HASH = HashingUtils::HashString("LOOP");


        InputSourceEndBehavior GetInputSourceEndBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTINUE_HASH)
          {
            return InputSourceEndBehavior::CONTINUE;
          }
          else if (hashCode == LOOP_HASH)
          {
            return InputSourceEndBehavior::LOOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputSourceEndBehavior>(hashCode);
          }

          return InputSourceEndBehavior::NOT_SET;
        }

        Aws::String GetNameForInputSourceEndBehavior(InputSourceEndBehavior enumValue)
        {
          switch(enumValue)
          {
          case InputSourceEndBehavior::CONTINUE:
            return "CONTINUE";
          case InputSourceEndBehavior::LOOP:
            return "LOOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputSourceEndBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
