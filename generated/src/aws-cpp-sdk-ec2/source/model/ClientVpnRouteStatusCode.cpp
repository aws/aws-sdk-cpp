/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnRouteStatusCode.h>
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
      namespace ClientVpnRouteStatusCodeMapper
      {

        static constexpr uint32_t creating_HASH = ConstExprHashingUtils::HashString("creating");
        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");


        ClientVpnRouteStatusCode GetClientVpnRouteStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == creating_HASH)
          {
            return ClientVpnRouteStatusCode::creating;
          }
          else if (hashCode == active_HASH)
          {
            return ClientVpnRouteStatusCode::active;
          }
          else if (hashCode == failed_HASH)
          {
            return ClientVpnRouteStatusCode::failed;
          }
          else if (hashCode == deleting_HASH)
          {
            return ClientVpnRouteStatusCode::deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnRouteStatusCode>(hashCode);
          }

          return ClientVpnRouteStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientVpnRouteStatusCode(ClientVpnRouteStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnRouteStatusCode::NOT_SET:
            return {};
          case ClientVpnRouteStatusCode::creating:
            return "creating";
          case ClientVpnRouteStatusCode::active:
            return "active";
          case ClientVpnRouteStatusCode::failed:
            return "failed";
          case ClientVpnRouteStatusCode::deleting:
            return "deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnRouteStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
