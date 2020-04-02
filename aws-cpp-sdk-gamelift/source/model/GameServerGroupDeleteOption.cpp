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

#include <aws/gamelift/model/GameServerGroupDeleteOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace GameServerGroupDeleteOptionMapper
      {

        static const int SAFE_DELETE_HASH = HashingUtils::HashString("SAFE_DELETE");
        static const int FORCE_DELETE_HASH = HashingUtils::HashString("FORCE_DELETE");
        static const int RETAIN_HASH = HashingUtils::HashString("RETAIN");


        GameServerGroupDeleteOption GetGameServerGroupDeleteOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAFE_DELETE_HASH)
          {
            return GameServerGroupDeleteOption::SAFE_DELETE;
          }
          else if (hashCode == FORCE_DELETE_HASH)
          {
            return GameServerGroupDeleteOption::FORCE_DELETE;
          }
          else if (hashCode == RETAIN_HASH)
          {
            return GameServerGroupDeleteOption::RETAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerGroupDeleteOption>(hashCode);
          }

          return GameServerGroupDeleteOption::NOT_SET;
        }

        Aws::String GetNameForGameServerGroupDeleteOption(GameServerGroupDeleteOption enumValue)
        {
          switch(enumValue)
          {
          case GameServerGroupDeleteOption::SAFE_DELETE:
            return "SAFE_DELETE";
          case GameServerGroupDeleteOption::FORCE_DELETE:
            return "FORCE_DELETE";
          case GameServerGroupDeleteOption::RETAIN:
            return "RETAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerGroupDeleteOptionMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
