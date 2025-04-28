/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DnsConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace DnsConfigurationStatusMapper
      {

        static const int valid_configuration_HASH = HashingUtils::HashString("valid-configuration");
        static const int invalid_configuration_HASH = HashingUtils::HashString("invalid-configuration");
        static const int unknown_configuration_HASH = HashingUtils::HashString("unknown-configuration");


        DnsConfigurationStatus GetDnsConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == valid_configuration_HASH)
          {
            return DnsConfigurationStatus::valid_configuration;
          }
          else if (hashCode == invalid_configuration_HASH)
          {
            return DnsConfigurationStatus::invalid_configuration;
          }
          else if (hashCode == unknown_configuration_HASH)
          {
            return DnsConfigurationStatus::unknown_configuration;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsConfigurationStatus>(hashCode);
          }

          return DnsConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForDnsConfigurationStatus(DnsConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case DnsConfigurationStatus::NOT_SET:
            return {};
          case DnsConfigurationStatus::valid_configuration:
            return "valid-configuration";
          case DnsConfigurationStatus::invalid_configuration:
            return "invalid-configuration";
          case DnsConfigurationStatus::unknown_configuration:
            return "unknown-configuration";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsConfigurationStatusMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
