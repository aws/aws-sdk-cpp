﻿/*
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

#include <aws/medialive/model/InputSecurityGroupState.h>
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
      namespace InputSecurityGroupStateMapper
      {

        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        InputSecurityGroupState GetInputSecurityGroupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return InputSecurityGroupState::IDLE;
          }
          else if (hashCode == IN_USE_HASH)
          {
            return InputSecurityGroupState::IN_USE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return InputSecurityGroupState::UPDATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InputSecurityGroupState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputSecurityGroupState>(hashCode);
          }

          return InputSecurityGroupState::NOT_SET;
        }

        Aws::String GetNameForInputSecurityGroupState(InputSecurityGroupState enumValue)
        {
          switch(enumValue)
          {
          case InputSecurityGroupState::IDLE:
            return "IDLE";
          case InputSecurityGroupState::IN_USE:
            return "IN_USE";
          case InputSecurityGroupState::UPDATING:
            return "UPDATING";
          case InputSecurityGroupState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InputSecurityGroupStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
