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

#include <aws/gamelift/model/GameServerClaimStatus.h>
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
      namespace GameServerClaimStatusMapper
      {

        static const int CLAIMED_HASH = HashingUtils::HashString("CLAIMED");


        GameServerClaimStatus GetGameServerClaimStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLAIMED_HASH)
          {
            return GameServerClaimStatus::CLAIMED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GameServerClaimStatus>(hashCode);
          }

          return GameServerClaimStatus::NOT_SET;
        }

        Aws::String GetNameForGameServerClaimStatus(GameServerClaimStatus enumValue)
        {
          switch(enumValue)
          {
          case GameServerClaimStatus::CLAIMED:
            return "CLAIMED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GameServerClaimStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
