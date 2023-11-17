/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolSourceResourceType.h>
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
      namespace IpamPoolSourceResourceTypeMapper
      {

        static const int vpc_HASH = HashingUtils::HashString("vpc");


        IpamPoolSourceResourceType GetIpamPoolSourceResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return IpamPoolSourceResourceType::vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamPoolSourceResourceType>(hashCode);
          }

          return IpamPoolSourceResourceType::NOT_SET;
        }

        Aws::String GetNameForIpamPoolSourceResourceType(IpamPoolSourceResourceType enumValue)
        {
          switch(enumValue)
          {
          case IpamPoolSourceResourceType::NOT_SET:
            return {};
          case IpamPoolSourceResourceType::vpc:
            return "vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamPoolSourceResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
