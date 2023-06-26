/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace LoadBalancerProtocolMapper
      {

        static const int HTTP_HTTPS_HASH = HashingUtils::HashString("HTTP_HTTPS");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        LoadBalancerProtocol GetLoadBalancerProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HTTPS_HASH)
          {
            return LoadBalancerProtocol::HTTP_HTTPS;
          }
          else if (hashCode == HTTP_HASH)
          {
            return LoadBalancerProtocol::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadBalancerProtocol>(hashCode);
          }

          return LoadBalancerProtocol::NOT_SET;
        }

        Aws::String GetNameForLoadBalancerProtocol(LoadBalancerProtocol enumValue)
        {
          switch(enumValue)
          {
          case LoadBalancerProtocol::HTTP_HTTPS:
            return "HTTP_HTTPS";
          case LoadBalancerProtocol::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadBalancerProtocolMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
