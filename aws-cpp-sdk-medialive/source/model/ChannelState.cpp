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

#include <aws/medialive/model/ChannelState.h>
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
      namespace ChannelStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RECOVERING_HASH = HashingUtils::HashString("RECOVERING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        ChannelState GetChannelStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ChannelState::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ChannelState::CREATE_FAILED;
          }
          else if (hashCode == IDLE_HASH)
          {
            return ChannelState::IDLE;
          }
          else if (hashCode == STARTING_HASH)
          {
            return ChannelState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ChannelState::RUNNING;
          }
          else if (hashCode == RECOVERING_HASH)
          {
            return ChannelState::RECOVERING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ChannelState::STOPPING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ChannelState::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ChannelState::DELETED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ChannelState::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ChannelState::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelState>(hashCode);
          }

          return ChannelState::NOT_SET;
        }

        Aws::String GetNameForChannelState(ChannelState enumValue)
        {
          switch(enumValue)
          {
          case ChannelState::CREATING:
            return "CREATING";
          case ChannelState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ChannelState::IDLE:
            return "IDLE";
          case ChannelState::STARTING:
            return "STARTING";
          case ChannelState::RUNNING:
            return "RUNNING";
          case ChannelState::RECOVERING:
            return "RECOVERING";
          case ChannelState::STOPPING:
            return "STOPPING";
          case ChannelState::DELETING:
            return "DELETING";
          case ChannelState::DELETED:
            return "DELETED";
          case ChannelState::UPDATING:
            return "UPDATING";
          case ChannelState::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
