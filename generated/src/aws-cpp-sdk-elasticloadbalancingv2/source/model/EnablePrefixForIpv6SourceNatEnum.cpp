/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/EnablePrefixForIpv6SourceNatEnum.h>
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
      namespace EnablePrefixForIpv6SourceNatEnumMapper
      {

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        EnablePrefixForIpv6SourceNatEnum GetEnablePrefixForIpv6SourceNatEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return EnablePrefixForIpv6SourceNatEnum::on;
          }
          else if (hashCode == off_HASH)
          {
            return EnablePrefixForIpv6SourceNatEnum::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnablePrefixForIpv6SourceNatEnum>(hashCode);
          }

          return EnablePrefixForIpv6SourceNatEnum::NOT_SET;
        }

        Aws::String GetNameForEnablePrefixForIpv6SourceNatEnum(EnablePrefixForIpv6SourceNatEnum enumValue)
        {
          switch(enumValue)
          {
          case EnablePrefixForIpv6SourceNatEnum::NOT_SET:
            return {};
          case EnablePrefixForIpv6SourceNatEnum::on:
            return "on";
          case EnablePrefixForIpv6SourceNatEnum::off:
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

      } // namespace EnablePrefixForIpv6SourceNatEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
