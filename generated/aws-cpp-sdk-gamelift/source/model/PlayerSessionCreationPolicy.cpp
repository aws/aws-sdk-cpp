/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace PlayerSessionCreationPolicyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
