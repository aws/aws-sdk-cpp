/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamMeteredAccount.h>
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
      namespace IpamMeteredAccountMapper
      {

        static const int ipam_owner_HASH = HashingUtils::HashString("ipam-owner");
        static const int resource_owner_HASH = HashingUtils::HashString("resource-owner");


        IpamMeteredAccount GetIpamMeteredAccountForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipam_owner_HASH)
          {
            return IpamMeteredAccount::ipam_owner;
          }
          else if (hashCode == resource_owner_HASH)
          {
            return IpamMeteredAccount::resource_owner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamMeteredAccount>(hashCode);
          }

          return IpamMeteredAccount::NOT_SET;
        }

        Aws::String GetNameForIpamMeteredAccount(IpamMeteredAccount enumValue)
        {
          switch(enumValue)
          {
          case IpamMeteredAccount::NOT_SET:
            return {};
          case IpamMeteredAccount::ipam_owner:
            return "ipam-owner";
          case IpamMeteredAccount::resource_owner:
            return "resource-owner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamMeteredAccountMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
