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

#include <aws/gamelift/model/GameServerUtilizationStatus.h>
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
      namespace GameServerUtilizationStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UTILIZED_HASH = HashingUtils::HashString("UTILIZED");


        GameServerUtilizationStatus GetGameServerUtilizationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return GameServerUtilizationStatus::AVAILABLE;
          }
          else if (hashCode == UTILIZED_HASH)
          {
            return GameServerUtilizationStatus::UTILIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerUtilizationStatus>(hashCode);
          }

          return GameServerUtilizationStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerUtilizationStatus(GameServerUtilizationStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerUtilizationStatus::AVAILABLE:
            return "AVAILABLE";
          case GameServerUtilizationStatus::UTILIZED:
            return "UTILIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerUtilizationStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
