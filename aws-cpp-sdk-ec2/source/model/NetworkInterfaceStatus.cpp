﻿/*
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
          case NetworkInterfaceStatus::available:
            return "available";
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

            return "";
          }
        }

      } // namespace NetworkInterfaceStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
