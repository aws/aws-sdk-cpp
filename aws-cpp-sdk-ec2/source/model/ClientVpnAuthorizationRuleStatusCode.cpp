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
