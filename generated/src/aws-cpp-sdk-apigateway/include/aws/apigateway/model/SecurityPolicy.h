/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIGateway {
namespace Model {
enum class SecurityPolicy {
  NOT_SET,
  TLS_1_0,
  TLS_1_2,
  SecurityPolicy_TLS13_1_3_2025_09,
  SecurityPolicy_TLS13_1_3_FIPS_2025_09,
  SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09,
  SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09,
  SecurityPolicy_TLS13_1_2_PQ_2025_09,
  SecurityPolicy_TLS13_1_2_2021_06,
  SecurityPolicy_TLS13_2025_EDGE,
  SecurityPolicy_TLS12_PFS_2025_EDGE,
  SecurityPolicy_TLS12_2018_EDGE
};

namespace SecurityPolicyMapper {
AWS_APIGATEWAY_API SecurityPolicy GetSecurityPolicyForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForSecurityPolicy(SecurityPolicy value);
}  // namespace SecurityPolicyMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
