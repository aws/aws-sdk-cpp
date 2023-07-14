/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnAuthorizationRuleStatusCode.h>
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
      namespace ClientVpnAuthorizationRuleStatusCodeMapper
      {

        static const int authorizing_HASH = HashingUtils::HashString("authorizing");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int revoking_HASH = HashingUtils::HashString("revoking");


        ClientVpnAuthorizationRuleStatusCode GetClientVpnAuthorizationRuleStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == authorizing_HASH)
          {
            return ClientVpnAuthorizationRuleStatusCode::authorizing;
          }
          else if (hashCode == active_HASH)
          {
            return ClientVpnAuthorizationRuleStatusCode::active;
          }
          else if (hashCode == failed_HASH)
          {
            return ClientVpnAuthorizationRuleStatusCode::failed;
          }
          else if (hashCode == revoking_HASH)
          {
            return ClientVpnAuthorizationRuleStatusCode::revoking;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnAuthorizationRuleStatusCode>(hashCode);
          }

          return ClientVpnAuthorizationRuleStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientVpnAuthorizationRuleStatusCode(ClientVpnAuthorizationRuleStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnAuthorizationRuleStatusCode::authorizing:
            return "authorizing";
          case ClientVpnAuthorizationRuleStatusCode::active:
            return "active";
          case ClientVpnAuthorizationRuleStatusCode::failed:
            return "failed";
          case ClientVpnAuthorizationRuleStatusCode::revoking:
            return "revoking";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnAuthorizationRuleStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
