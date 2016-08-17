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
#include <aws/gamelift/model/PlayerSessionCreationPolicy.h>
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
      namespace PlayerSessionCreationPolicyMapper
      {

        static const int ACCEPT_ALL_HASH = HashingUtils::HashString("ACCEPT_ALL");
        static const int DENY_ALL_HASH = HashingUtils::HashString("DENY_ALL");


        PlayerSessionCreationPolicy GetPlayerSessionCreationPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPT_ALL_HASH)
          {
            return PlayerSessionCreationPolicy::ACCEPT_ALL;
          }
          else if (hashCode == DENY_ALL_HASH)
          {
            return PlayerSessionCreationPolicy::DENY_ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlayerSessionCreationPolicy>(hashCode);
          }

          return PlayerSessionCreationPolicy::NOT_SET;
        }

        Aws::String GetNameForPlayerSessionCreationPolicy(PlayerSessionCreationPolicy enumValue)
        {
          switch(enumValue)
          {
          case PlayerSessionCreationPolicy::ACCEPT_ALL:
            return "ACCEPT_ALL";
          case PlayerSessionCreationPolicy::DENY_ALL:
            return "DENY_ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlayerSessionCreationPolicyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
