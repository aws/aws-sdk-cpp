/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lightsail/model/DistributionMetricName.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {
namespace DistributionMetricNameMapper {

static const int Requests_HASH = HashingUtils::HashString("Requests");
static const int BytesDownloaded_HASH = HashingUtils::HashString("BytesDownloaded");
static const int BytesUploaded_HASH = HashingUtils::HashString("BytesUploaded");
static const int TotalErrorRate_HASH = HashingUtils::HashString("TotalErrorRate");
static const int Http4xxErrorRate_HASH = HashingUtils::HashString("Http4xxErrorRate");
static const int Http5xxErrorRate_HASH = HashingUtils::HashString("Http5xxErrorRate");
static const int WafAllowedRequests_HASH = HashingUtils::HashString("WafAllowedRequests");
static const int WafBlockedRequests_HASH = HashingUtils::HashString("WafBlockedRequests");

DistributionMetricName GetDistributionMetricNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Requests_HASH) {
    return DistributionMetricName::Requests;
  } else if (hashCode == BytesDownloaded_HASH) {
    return DistributionMetricName::BytesDownloaded;
  } else if (hashCode == BytesUploaded_HASH) {
    return DistributionMetricName::BytesUploaded;
  } else if (hashCode == TotalErrorRate_HASH) {
    return DistributionMetricName::TotalErrorRate;
  } else if (hashCode == Http4xxErrorRate_HASH) {
    return DistributionMetricName::Http4xxErrorRate;
  } else if (hashCode == Http5xxErrorRate_HASH) {
    return DistributionMetricName::Http5xxErrorRate;
  } else if (hashCode == WafAllowedRequests_HASH) {
    return DistributionMetricName::WafAllowedRequests;
  } else if (hashCode == WafBlockedRequests_HASH) {
    return DistributionMetricName::WafBlockedRequests;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DistributionMetricName>(hashCode);
  }

  return DistributionMetricName::NOT_SET;
}

Aws::String GetNameForDistributionMetricName(DistributionMetricName enumValue) {
  switch (enumValue) {
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
    case DistributionMetricName::WafAllowedRequests:
      return "WafAllowedRequests";
    case DistributionMetricName::WafBlockedRequests:
      return "WafBlockedRequests";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DistributionMetricNameMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
