/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/FindingReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace FindingReasonMapper {

static const int AUTHENTICATION_NOT_CONFIGURED_HASH = HashingUtils::HashString("AUTHENTICATION_NOT_CONFIGURED");
static const int REQUEST_VALIDATION_NOT_ENABLED_HASH = HashingUtils::HashString("REQUEST_VALIDATION_NOT_ENABLED");
static const int API_KEY_NOT_CONFIGURED_HASH = HashingUtils::HashString("API_KEY_NOT_CONFIGURED");
static const int THROTTLING_NOT_ENABLED_HASH = HashingUtils::HashString("THROTTLING_NOT_ENABLED");
static const int THROTTLING_RATE_LIMIT_NOT_SET_HASH = HashingUtils::HashString("THROTTLING_RATE_LIMIT_NOT_SET");
static const int THROTTLING_BURST_LIMIT_NOT_SET_HASH = HashingUtils::HashString("THROTTLING_BURST_LIMIT_NOT_SET");
static const int RESPONSE_CACHING_NOT_ENABLED_HASH = HashingUtils::HashString("RESPONSE_CACHING_NOT_ENABLED");
static const int STAGE_WAF_NOT_ASSOCIATED_HASH = HashingUtils::HashString("STAGE_WAF_NOT_ASSOCIATED");
static const int STAGE_ACCESS_LOGGING_NOT_ENABLED_HASH = HashingUtils::HashString("STAGE_ACCESS_LOGGING_NOT_ENABLED");
static const int PRIVATE_API_RESOURCE_POLICY_MISSING_HASH = HashingUtils::HashString("PRIVATE_API_RESOURCE_POLICY_MISSING");
static const int REST_API_TLS_BELOW_1_2_HASH = HashingUtils::HashString("REST_API_TLS_BELOW_1_2");
static const int LOAD_BALANCER_WAF_NOT_ASSOCIATED_HASH = HashingUtils::HashString("LOAD_BALANCER_WAF_NOT_ASSOCIATED");
static const int LISTENER_TLS_BELOW_1_2_HASH = HashingUtils::HashString("LISTENER_TLS_BELOW_1_2");
static const int DISTRIBUTION_TLS_BELOW_1_2_HASH = HashingUtils::HashString("DISTRIBUTION_TLS_BELOW_1_2");
static const int DISTRIBUTION_WAF_NOT_ASSOCIATED_HASH = HashingUtils::HashString("DISTRIBUTION_WAF_NOT_ASSOCIATED");
static const int DISTRIBUTION_SERVES_PLAINTEXT_HTTP_HASH = HashingUtils::HashString("DISTRIBUTION_SERVES_PLAINTEXT_HTTP");
static const int DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED_HASH = HashingUtils::HashString("DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED");
static const int GEO_RESTRICTION_NOT_CONFIGURED_HASH = HashingUtils::HashString("GEO_RESTRICTION_NOT_CONFIGURED");
static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");

FindingReason GetFindingReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTHENTICATION_NOT_CONFIGURED_HASH) {
    return FindingReason::AUTHENTICATION_NOT_CONFIGURED;
  } else if (hashCode == REQUEST_VALIDATION_NOT_ENABLED_HASH) {
    return FindingReason::REQUEST_VALIDATION_NOT_ENABLED;
  } else if (hashCode == API_KEY_NOT_CONFIGURED_HASH) {
    return FindingReason::API_KEY_NOT_CONFIGURED;
  } else if (hashCode == THROTTLING_NOT_ENABLED_HASH) {
    return FindingReason::THROTTLING_NOT_ENABLED;
  } else if (hashCode == THROTTLING_RATE_LIMIT_NOT_SET_HASH) {
    return FindingReason::THROTTLING_RATE_LIMIT_NOT_SET;
  } else if (hashCode == THROTTLING_BURST_LIMIT_NOT_SET_HASH) {
    return FindingReason::THROTTLING_BURST_LIMIT_NOT_SET;
  } else if (hashCode == RESPONSE_CACHING_NOT_ENABLED_HASH) {
    return FindingReason::RESPONSE_CACHING_NOT_ENABLED;
  } else if (hashCode == STAGE_WAF_NOT_ASSOCIATED_HASH) {
    return FindingReason::STAGE_WAF_NOT_ASSOCIATED;
  } else if (hashCode == STAGE_ACCESS_LOGGING_NOT_ENABLED_HASH) {
    return FindingReason::STAGE_ACCESS_LOGGING_NOT_ENABLED;
  } else if (hashCode == PRIVATE_API_RESOURCE_POLICY_MISSING_HASH) {
    return FindingReason::PRIVATE_API_RESOURCE_POLICY_MISSING;
  } else if (hashCode == REST_API_TLS_BELOW_1_2_HASH) {
    return FindingReason::REST_API_TLS_BELOW_1_2;
  } else if (hashCode == LOAD_BALANCER_WAF_NOT_ASSOCIATED_HASH) {
    return FindingReason::LOAD_BALANCER_WAF_NOT_ASSOCIATED;
  } else if (hashCode == LISTENER_TLS_BELOW_1_2_HASH) {
    return FindingReason::LISTENER_TLS_BELOW_1_2;
  } else if (hashCode == DISTRIBUTION_TLS_BELOW_1_2_HASH) {
    return FindingReason::DISTRIBUTION_TLS_BELOW_1_2;
  } else if (hashCode == DISTRIBUTION_WAF_NOT_ASSOCIATED_HASH) {
    return FindingReason::DISTRIBUTION_WAF_NOT_ASSOCIATED;
  } else if (hashCode == DISTRIBUTION_SERVES_PLAINTEXT_HTTP_HASH) {
    return FindingReason::DISTRIBUTION_SERVES_PLAINTEXT_HTTP;
  } else if (hashCode == DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED_HASH) {
    return FindingReason::DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED;
  } else if (hashCode == GEO_RESTRICTION_NOT_CONFIGURED_HASH) {
    return FindingReason::GEO_RESTRICTION_NOT_CONFIGURED;
  } else if (hashCode == UNKNOWN_HASH) {
    return FindingReason::UNKNOWN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingReason>(hashCode);
  }

  return FindingReason::NOT_SET;
}

Aws::String GetNameForFindingReason(FindingReason enumValue) {
  switch (enumValue) {
    case FindingReason::NOT_SET:
      return {};
    case FindingReason::AUTHENTICATION_NOT_CONFIGURED:
      return "AUTHENTICATION_NOT_CONFIGURED";
    case FindingReason::REQUEST_VALIDATION_NOT_ENABLED:
      return "REQUEST_VALIDATION_NOT_ENABLED";
    case FindingReason::API_KEY_NOT_CONFIGURED:
      return "API_KEY_NOT_CONFIGURED";
    case FindingReason::THROTTLING_NOT_ENABLED:
      return "THROTTLING_NOT_ENABLED";
    case FindingReason::THROTTLING_RATE_LIMIT_NOT_SET:
      return "THROTTLING_RATE_LIMIT_NOT_SET";
    case FindingReason::THROTTLING_BURST_LIMIT_NOT_SET:
      return "THROTTLING_BURST_LIMIT_NOT_SET";
    case FindingReason::RESPONSE_CACHING_NOT_ENABLED:
      return "RESPONSE_CACHING_NOT_ENABLED";
    case FindingReason::STAGE_WAF_NOT_ASSOCIATED:
      return "STAGE_WAF_NOT_ASSOCIATED";
    case FindingReason::STAGE_ACCESS_LOGGING_NOT_ENABLED:
      return "STAGE_ACCESS_LOGGING_NOT_ENABLED";
    case FindingReason::PRIVATE_API_RESOURCE_POLICY_MISSING:
      return "PRIVATE_API_RESOURCE_POLICY_MISSING";
    case FindingReason::REST_API_TLS_BELOW_1_2:
      return "REST_API_TLS_BELOW_1_2";
    case FindingReason::LOAD_BALANCER_WAF_NOT_ASSOCIATED:
      return "LOAD_BALANCER_WAF_NOT_ASSOCIATED";
    case FindingReason::LISTENER_TLS_BELOW_1_2:
      return "LISTENER_TLS_BELOW_1_2";
    case FindingReason::DISTRIBUTION_TLS_BELOW_1_2:
      return "DISTRIBUTION_TLS_BELOW_1_2";
    case FindingReason::DISTRIBUTION_WAF_NOT_ASSOCIATED:
      return "DISTRIBUTION_WAF_NOT_ASSOCIATED";
    case FindingReason::DISTRIBUTION_SERVES_PLAINTEXT_HTTP:
      return "DISTRIBUTION_SERVES_PLAINTEXT_HTTP";
    case FindingReason::DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED:
      return "DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED";
    case FindingReason::GEO_RESTRICTION_NOT_CONFIGURED:
      return "GEO_RESTRICTION_NOT_CONFIGURED";
    case FindingReason::UNKNOWN:
      return "UNKNOWN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
