/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnEndpointAttributeStatusCode.h>
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
      namespace ClientVpnEndpointAttributeStatusCodeMapper
      {

        static const int applying_HASH = HashingUtils::HashString("applying");
        static const int applied_HASH = HashingUtils::HashString("applied");


        ClientVpnEndpointAttributeStatusCode GetClientVpnEndpointAttributeStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == applying_HASH)
          {
            return ClientVpnEndpointAttributeStatusCode::applying;
          }
          else if (hashCode == applied_HASH)
          {
            return ClientVpnEndpointAttributeStatusCode::applied;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnEndpointAttributeStatusCode>(hashCode);
          }

          return ClientVpnEndpointAttributeStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientVpnEndpointAttributeStatusCode(ClientVpnEndpointAttributeStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnEndpointAttributeStatusCode::applying:
            return "applying";
          case ClientVpnEndpointAttributeStatusCode::applied:
            return "applied";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnEndpointAttributeStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
