/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/InterconnectState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace InterconnectStateMapper
      {

        static const int requested_HASH = HashingUtils::HashString("requested");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int down_HASH = HashingUtils::HashString("down");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        InterconnectState GetInterconnectStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == requested_HASH)
          {
            return InterconnectState::requested;
          }
          else if (hashCode == pending_HASH)
          {
            return InterconnectState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return InterconnectState::available;
          }
          else if (hashCode == down_HASH)
          {
            return InterconnectState::down;
          }
          else if (hashCode == deleting_HASH)
          {
            return InterconnectState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return InterconnectState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InterconnectState>(hashCode);
          }

          return InterconnectState::NOT_SET;
        }

        Aws::String GetNameForInterconnectState(InterconnectState enumValue)
        {
          switch(enumValue)
          {
          case InterconnectState::requested:
            return "requested";
          case InterconnectState::pending:
            return "pending";
          case InterconnectState::available:
            return "available";
          case InterconnectState::down:
            return "down";
          case InterconnectState::deleting:
            return "deleting";
          case InterconnectState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InterconnectStateMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
