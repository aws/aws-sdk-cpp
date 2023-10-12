/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnEndpointStatusCode.h>
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
      namespace ClientVpnEndpointStatusCodeMapper
      {

        static constexpr uint32_t pending_associate_HASH = ConstExprHashingUtils::HashString("pending-associate");
        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        ClientVpnEndpointStatusCode GetClientVpnEndpointStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_associate_HASH)
          {
            return ClientVpnEndpointStatusCode::pending_associate;
          }
          else if (hashCode == available_HASH)
          {
            return ClientVpnEndpointStatusCode::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return ClientVpnEndpointStatusCode::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return ClientVpnEndpointStatusCode::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnEndpointStatusCode>(hashCode);
          }

          return ClientVpnEndpointStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientVpnEndpointStatusCode(ClientVpnEndpointStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnEndpointStatusCode::NOT_SET:
            return {};
          case ClientVpnEndpointStatusCode::pending_associate:
            return "pending-associate";
          case ClientVpnEndpointStatusCode::available:
            return "available";
          case ClientVpnEndpointStatusCode::deleting:
            return "deleting";
          case ClientVpnEndpointStatusCode::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnEndpointStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
