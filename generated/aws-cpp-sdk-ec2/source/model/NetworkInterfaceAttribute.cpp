/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInterfaceAttribute.h>
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
      namespace NetworkInterfaceAttributeMapper
      {

        static const int description_HASH = HashingUtils::HashString("description");
        static const int groupSet_HASH = HashingUtils::HashString("groupSet");
        static const int sourceDestCheck_HASH = HashingUtils::HashString("sourceDestCheck");
        static const int attachment_HASH = HashingUtils::HashString("attachment");


        NetworkInterfaceAttribute GetNetworkInterfaceAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == description_HASH)
          {
            return NetworkInterfaceAttribute::description;
          }
          else if (hashCode == groupSet_HASH)
          {
            return NetworkInterfaceAttribute::groupSet;
          }
          else if (hashCode == sourceDestCheck_HASH)
          {
            return NetworkInterfaceAttribute::sourceDestCheck;
          }
          else if (hashCode == attachment_HASH)
          {
            return NetworkInterfaceAttribute::attachment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkInterfaceAttribute>(hashCode);
          }

          return NetworkInterfaceAttribute::NOT_SET;
        }

        Aws::String GetNameForNetworkInterfaceAttribute(NetworkInterfaceAttribute enumValue)
        {
          switch(enumValue)
          {
          case NetworkInterfaceAttribute::description:
            return "description";
          case NetworkInterfaceAttribute::groupSet:
            return "groupSet";
          case NetworkInterfaceAttribute::sourceDestCheck:
            return "sourceDestCheck";
          case NetworkInterfaceAttribute::attachment:
            return "attachment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkInterfaceAttributeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
