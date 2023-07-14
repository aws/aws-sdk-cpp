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

        static const int Requests_HASH = HashingUtils::HashString("Requests");
        static const int BytesDownloaded_HASH = HashingUtils::HashString("BytesDownloaded");
        static const int BytesUploaded_HASH = HashingUtils::HashString("BytesUploaded");
        static const int TotalErrorRate_HASH = HashingUtils::HashString("TotalErrorRate");
        static const int Http4xxErrorRate_HASH = HashingUtils::HashString("Http4xxErrorRate");
        static const int Http5xxErrorRate_HASH = HashingUtils::HashString("Http5xxErrorRate");


        DistributionMetricName GetDistributionMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
