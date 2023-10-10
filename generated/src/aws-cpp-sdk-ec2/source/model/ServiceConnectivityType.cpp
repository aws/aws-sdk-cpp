/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceConnectivityType.h>
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
      namespace ServiceConnectivityTypeMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int ipv6_HASH = HashingUtils::HashString("ipv6");


        ServiceConnectivityType GetServiceConnectivityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return ServiceConnectivityType::ipv4;
          }
          else if (hashCode == ipv6_HASH)
          {
            return ServiceConnectivityType::ipv6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceConnectivityType>(hashCode);
          }

          return ServiceConnectivityType::NOT_SET;
        }

        Aws::String GetNameForServiceConnectivityType(ServiceConnectivityType enumValue)
        {
          switch(enumValue)
          {
          case ServiceConnectivityType::NOT_SET:
            return {};
          case ServiceConnectivityType::ipv4:
            return "ipv4";
          case ServiceConnectivityType::ipv6:
            return "ipv6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceConnectivityTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
