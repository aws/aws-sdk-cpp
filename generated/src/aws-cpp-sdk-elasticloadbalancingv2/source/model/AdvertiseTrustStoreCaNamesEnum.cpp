/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AdvertiseTrustStoreCaNamesEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace AdvertiseTrustStoreCaNamesEnumMapper
      {

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        AdvertiseTrustStoreCaNamesEnum GetAdvertiseTrustStoreCaNamesEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return AdvertiseTrustStoreCaNamesEnum::on;
          }
          else if (hashCode == off_HASH)
          {
            return AdvertiseTrustStoreCaNamesEnum::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdvertiseTrustStoreCaNamesEnum>(hashCode);
          }

          return AdvertiseTrustStoreCaNamesEnum::NOT_SET;
        }

        Aws::String GetNameForAdvertiseTrustStoreCaNamesEnum(AdvertiseTrustStoreCaNamesEnum enumValue)
        {
          switch(enumValue)
          {
          case AdvertiseTrustStoreCaNamesEnum::NOT_SET:
            return {};
          case AdvertiseTrustStoreCaNamesEnum::on:
            return "on";
          case AdvertiseTrustStoreCaNamesEnum::off:
            return "off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdvertiseTrustStoreCaNamesEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
