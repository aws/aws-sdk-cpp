/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class FindingReason {
  NOT_SET,
  AUTHENTICATION_NOT_CONFIGURED,
  REQUEST_VALIDATION_NOT_ENABLED,
  API_KEY_NOT_CONFIGURED,
  THROTTLING_NOT_ENABLED,
  THROTTLING_RATE_LIMIT_NOT_SET,
  THROTTLING_BURST_LIMIT_NOT_SET,
  RESPONSE_CACHING_NOT_ENABLED,
  STAGE_WAF_NOT_ASSOCIATED,
  STAGE_ACCESS_LOGGING_NOT_ENABLED,
  PRIVATE_API_RESOURCE_POLICY_MISSING,
  REST_API_TLS_BELOW_1_2,
  LOAD_BALANCER_WAF_NOT_ASSOCIATED,
  LISTENER_TLS_BELOW_1_2,
  DISTRIBUTION_TLS_BELOW_1_2,
  DISTRIBUTION_WAF_NOT_ASSOCIATED,
  DISTRIBUTION_SERVES_PLAINTEXT_HTTP,
  DISTRIBUTION_ACCESS_LOGGING_NOT_ENABLED,
  GEO_RESTRICTION_NOT_CONFIGURED,
  UNKNOWN
};

namespace FindingReasonMapper {
AWS_APIPORTAL_API FindingReason GetFindingReasonForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForFindingReason(FindingReason value);
}  // namespace FindingReasonMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
