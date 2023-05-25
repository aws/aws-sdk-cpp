/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcAttributeName.h>
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
      namespace VpcAttributeNameMapper
      {

        static const int enableDnsSupport_HASH = HashingUtils::HashString("enableDnsSupport");
        static const int enableDnsHostnames_HASH = HashingUtils::HashString("enableDnsHostnames");
        static const int enableNetworkAddressUsageMetrics_HASH = HashingUtils::HashString("enableNetworkAddressUsageMetrics");


        VpcAttributeName GetVpcAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enableDnsSupport_HASH)
          {
            return VpcAttributeName::enableDnsSupport;
          }
          else if (hashCode == enableDnsHostnames_HASH)
          {
            return VpcAttributeName::enableDnsHostnames;
          }
          else if (hashCode == enableNetworkAddressUsageMetrics_HASH)
          {
            return VpcAttributeName::enableNetworkAddressUsageMetrics;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcAttributeName>(hashCode);
          }

          return VpcAttributeName::NOT_SET;
        }

        Aws::String GetNameForVpcAttributeName(VpcAttributeName enumValue)
        {
          switch(enumValue)
          {
          case VpcAttributeName::enableDnsSupport:
            return "enableDnsSupport";
          case VpcAttributeName::enableDnsHostnames:
            return "enableDnsHostnames";
          case VpcAttributeName::enableNetworkAddressUsageMetrics:
            return "enableNetworkAddressUsageMetrics";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcAttributeNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
