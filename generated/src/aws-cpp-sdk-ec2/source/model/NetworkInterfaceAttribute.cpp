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

        static constexpr uint32_t description_HASH = ConstExprHashingUtils::HashString("description");
        static constexpr uint32_t groupSet_HASH = ConstExprHashingUtils::HashString("groupSet");
        static constexpr uint32_t sourceDestCheck_HASH = ConstExprHashingUtils::HashString("sourceDestCheck");
        static constexpr uint32_t attachment_HASH = ConstExprHashingUtils::HashString("attachment");


        NetworkInterfaceAttribute GetNetworkInterfaceAttributeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case NetworkInterfaceAttribute::NOT_SET:
            return {};
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
