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

#include <aws/networkmanager/model/GlobalNetworkState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace GlobalNetworkStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        GlobalNetworkState GetGlobalNetworkStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return GlobalNetworkState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return GlobalNetworkState::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return GlobalNetworkState::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return GlobalNetworkState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalNetworkState>(hashCode);
          }

          return GlobalNetworkState::NOT_SET;
        }

        Aws::String GetNameForGlobalNetworkState(GlobalNetworkState enumValue)
        {
          switch(enumValue)
          {
          case GlobalNetworkState::PENDING:
            return "PENDING";
          case GlobalNetworkState::AVAILABLE:
            return "AVAILABLE";
          case GlobalNetworkState::DELETING:
            return "DELETING";
          case GlobalNetworkState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalNetworkStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
