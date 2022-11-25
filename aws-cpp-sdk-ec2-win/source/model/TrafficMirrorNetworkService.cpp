/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrafficMirrorNetworkService.h>
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
      namespace TrafficMirrorNetworkServiceMapper
      {

        static const int amazon_dns_HASH = HashingUtils::HashString("amazon-dns");


        TrafficMirrorNetworkService GetTrafficMirrorNetworkServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == amazon_dns_HASH)
          {
            return TrafficMirrorNetworkService::amazon_dns;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficMirrorNetworkService>(hashCode);
          }

          return TrafficMirrorNetworkService::NOT_SET;
        }

        Aws::String GetNameForTrafficMirrorNetworkService(TrafficMirrorNetworkService enumValue)
        {
          switch(enumValue)
          {
          case TrafficMirrorNetworkService::amazon_dns:
            return "amazon-dns";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficMirrorNetworkServiceMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
