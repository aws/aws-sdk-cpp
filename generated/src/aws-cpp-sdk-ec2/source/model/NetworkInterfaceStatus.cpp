﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceStatus.h>
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
      namespace NetworkInterfaceStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int associated_HASH = HashingUtils::HashString("associated");
        static const int attaching_HASH = HashingUtils::HashString("attaching");
        static const int in_use_HASH = HashingUtils::HashString("in-use");
        static const int detaching_HASH = HashingUtils::HashString("detaching");


        NetworkInterfaceStatus GetNetworkInterfaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return NetworkInterfaceStatus::available;
          }
          else if (hashCode == associated_HASH)
          {
            return NetworkInterfaceStatus::associated;
          }
          else if (hashCode == attaching_HASH)
          {
            return NetworkInterfaceStatus::attaching;
          }
          else if (hashCode == in_use_HASH)
          {
            return NetworkInterfaceStatus::in_use;
          }
          else if (hashCode == detaching_HASH)
          {
            return NetworkInterfaceStatus::detaching;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceStatus>(hashCode);
          }

          return NetworkInterfaceStatus::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceStatus(NetworkInterfaceStatus enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceStatus::NOT_SET:
            return {};
          case NetworkInterfaceStatus::available:
            return "available";
          case NetworkInterfaceStatus::associated:
            return "associated";
          case NetworkInterfaceStatus::attaching:
            return "attaching";
          case NetworkInterfaceStatus::in_use:
            return "in-use";
          case NetworkInterfaceStatus::detaching:
            return "detaching";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
