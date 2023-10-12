/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DistributionMetricName.h>
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
      namespace DistributionMetricNameMapper
      {

        static constexpr uint32_t Requests_HASH = ConstExprHashingUtils::HashString("Requests");
        static constexpr uint32_t BytesDownloaded_HASH = ConstExprHashingUtils::HashString("BytesDownloaded");
        static constexpr uint32_t BytesUploaded_HASH = ConstExprHashingUtils::HashString("BytesUploaded");
        static constexpr uint32_t TotalErrorRate_HASH = ConstExprHashingUtils::HashString("TotalErrorRate");
        static constexpr uint32_t Http4xxErrorRate_HASH = ConstExprHashingUtils::HashString("Http4xxErrorRate");
        static constexpr uint32_t Http5xxErrorRate_HASH = ConstExprHashingUtils::HashString("Http5xxErrorRate");


        DistributionMetricName GetDistributionMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Requests_HASH)
          {
            return DistributionMetricName::Requests;
          }
          else if (hashCode == BytesDownloaded_HASH)
          {
            return DistributionMetricName::BytesDownloaded;
          }
          else if (hashCode == BytesUploaded_HASH)
          {
            return DistributionMetricName::BytesUploaded;
          }
          else if (hashCode == TotalErrorRate_HASH)
          {
            return DistributionMetricName::TotalErrorRate;
          }
          else if (hashCode == Http4xxErrorRate_HASH)
          {
            return DistributionMetricName::Http4xxErrorRate;
          }
          else if (hashCode == Http5xxErrorRate_HASH)
          {
            return DistributionMetricName::Http5xxErrorRate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DistributionMetricName>(hashCode);
          }

          return DistributionMetricName::NOT_SET;
        }

        Aws::String GetNameForDistributionMetricName(DistributionMetricName enumValue)
        {
          switch(enumValue)
          {
          case DistributionMetricName::NOT_SET:
            return {};
          case DistributionMetricName::Requests:
            return "Requests";
          case DistributionMetricName::BytesDownloaded:
            return "BytesDownloaded";
          case DistributionMetricName::BytesUploaded:
            return "BytesUploaded";
          case DistributionMetricName::TotalErrorRate:
            return "TotalErrorRate";
          case DistributionMetricName::Http4xxErrorRate:
            return "Http4xxErrorRate";
          case DistributionMetricName::Http5xxErrorRate:
            return "Http5xxErrorRate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DistributionMetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
