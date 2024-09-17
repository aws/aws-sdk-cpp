/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TokenState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TokenStateMapper
      {

        static const int valid_HASH = HashingUtils::HashString("valid");
        static const int expired_HASH = HashingUtils::HashString("expired");


        TokenState GetTokenStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == valid_HASH)
          {
            return TokenState::valid;
          }
          else if (hashCode == expired_HASH)
          {
            return TokenState::expired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TokenState>(hashCode);
          }

          return TokenState::NOT_SET;
        }

        Aws::String GetNameForTokenState(TokenState enumValue)
        {
          switch(enumValue)
          {
          case TokenState::NOT_SET:
            return {};
          case TokenState::valid:
            return "valid";
          case TokenState::expired:
            return "expired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TokenStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
