/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/XksProxyConnectivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace XksProxyConnectivityTypeMapper
      {

        static const int PUBLIC_ENDPOINT_HASH = HashingUtils::HashString("PUBLIC_ENDPOINT");
        static const int VPC_ENDPOINT_SERVICE_HASH = HashingUtils::HashString("VPC_ENDPOINT_SERVICE");


        XksProxyConnectivityType GetXksProxyConnectivityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC_ENDPOINT_HASH)
          {
            return XksProxyConnectivityType::PUBLIC_ENDPOINT;
          }
          else if (hashCode == VPC_ENDPOINT_SERVICE_HASH)
          {
            return XksProxyConnectivityType::VPC_ENDPOINT_SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XksProxyConnectivityType>(hashCode);
          }

          return XksProxyConnectivityType::NOT_SET;
        }

        Aws::String GetNameForXksProxyConnectivityType(XksProxyConnectivityType enumValue)
        {
          switch(enumValue)
          {
          case XksProxyConnectivityType::PUBLIC_ENDPOINT:
            return "PUBLIC_ENDPOINT";
          case XksProxyConnectivityType::VPC_ENDPOINT_SERVICE:
            return "VPC_ENDPOINT_SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace XksProxyConnectivityTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws
