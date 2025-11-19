/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/SecurityPolicy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIGateway {
namespace Model {
namespace SecurityPolicyMapper {

static const int TLS_1_0_HASH = HashingUtils::HashString("TLS_1_0");
static const int TLS_1_2_HASH = HashingUtils::HashString("TLS_1_2");
static const int SecurityPolicy_TLS13_1_3_2025_09_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_3_2025_09");
static const int SecurityPolicy_TLS13_1_3_FIPS_2025_09_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_3_FIPS_2025_09");
static const int SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09");
static const int SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09");
static const int SecurityPolicy_TLS13_1_2_PQ_2025_09_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_2_PQ_2025_09");
static const int SecurityPolicy_TLS13_1_2_2021_06_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_1_2_2021_06");
static const int SecurityPolicy_TLS13_2025_EDGE_HASH = HashingUtils::HashString("SecurityPolicy_TLS13_2025_EDGE");
static const int SecurityPolicy_TLS12_PFS_2025_EDGE_HASH = HashingUtils::HashString("SecurityPolicy_TLS12_PFS_2025_EDGE");
static const int SecurityPolicy_TLS12_2018_EDGE_HASH = HashingUtils::HashString("SecurityPolicy_TLS12_2018_EDGE");

SecurityPolicy GetSecurityPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TLS_1_0_HASH) {
    return SecurityPolicy::TLS_1_0;
  } else if (hashCode == TLS_1_2_HASH) {
    return SecurityPolicy::TLS_1_2;
  } else if (hashCode == SecurityPolicy_TLS13_1_3_2025_09_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_3_2025_09;
  } else if (hashCode == SecurityPolicy_TLS13_1_3_FIPS_2025_09_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_3_FIPS_2025_09;
  } else if (hashCode == SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09;
  } else if (hashCode == SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09;
  } else if (hashCode == SecurityPolicy_TLS13_1_2_PQ_2025_09_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_2_PQ_2025_09;
  } else if (hashCode == SecurityPolicy_TLS13_1_2_2021_06_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_1_2_2021_06;
  } else if (hashCode == SecurityPolicy_TLS13_2025_EDGE_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS13_2025_EDGE;
  } else if (hashCode == SecurityPolicy_TLS12_PFS_2025_EDGE_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS12_PFS_2025_EDGE;
  } else if (hashCode == SecurityPolicy_TLS12_2018_EDGE_HASH) {
    return SecurityPolicy::SecurityPolicy_TLS12_2018_EDGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SecurityPolicy>(hashCode);
  }

  return SecurityPolicy::NOT_SET;
}

Aws::String GetNameForSecurityPolicy(SecurityPolicy enumValue) {
  switch (enumValue) {
    case SecurityPolicy::NOT_SET:
      return {};
    case SecurityPolicy::TLS_1_0:
      return "TLS_1_0";
    case SecurityPolicy::TLS_1_2:
      return "TLS_1_2";
    case SecurityPolicy::SecurityPolicy_TLS13_1_3_2025_09:
      return "SecurityPolicy_TLS13_1_3_2025_09";
    case SecurityPolicy::SecurityPolicy_TLS13_1_3_FIPS_2025_09:
      return "SecurityPolicy_TLS13_1_3_FIPS_2025_09";
    case SecurityPolicy::SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09:
      return "SecurityPolicy_TLS13_1_2_PFS_PQ_2025_09";
    case SecurityPolicy::SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09:
      return "SecurityPolicy_TLS13_1_2_FIPS_PQ_2025_09";
    case SecurityPolicy::SecurityPolicy_TLS13_1_2_PQ_2025_09:
      return "SecurityPolicy_TLS13_1_2_PQ_2025_09";
    case SecurityPolicy::SecurityPolicy_TLS13_1_2_2021_06:
      return "SecurityPolicy_TLS13_1_2_2021_06";
    case SecurityPolicy::SecurityPolicy_TLS13_2025_EDGE:
      return "SecurityPolicy_TLS13_2025_EDGE";
    case SecurityPolicy::SecurityPolicy_TLS12_PFS_2025_EDGE:
      return "SecurityPolicy_TLS12_PFS_2025_EDGE";
    case SecurityPolicy::SecurityPolicy_TLS12_2018_EDGE:
      return "SecurityPolicy_TLS12_2018_EDGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SecurityPolicyMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
