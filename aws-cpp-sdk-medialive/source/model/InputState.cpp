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

#include <aws/medialive/model/InputState.h>
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
      namespace InputStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DETACHED_HASH = HashingUtils::HashString("DETACHED");
        static const int ATTACHED_HASH = HashingUtils::HashString("ATTACHED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        InputState GetInputStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return InputState::CREATING;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return InputState::DETACHED;
          }
          else if (hashCode == ATTACHED_HASH)
          {
            return InputState::ATTACHED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InputState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InputState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputState>(hashCode);
          }

          return InputState::NOT_SET;
        }

        Aws::String GetNameForInputState(InputState enumValue)
        {
          switch(enumValue)
          {
          case InputState::CREATING:
            return "CREATING";
          case InputState::DETACHED:
            return "DETACHED";
          case InputState::ATTACHED:
            return "ATTACHED";
          case InputState::DELETING:
            return "DELETING";
          case InputState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
