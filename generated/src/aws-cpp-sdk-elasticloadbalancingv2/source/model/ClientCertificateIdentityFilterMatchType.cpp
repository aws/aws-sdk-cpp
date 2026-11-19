/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterMatchType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
namespace ClientCertificateIdentityFilterMatchTypeMapper {

static const int exact_HASH = HashingUtils::HashString("exact");
static const int prefix_HASH = HashingUtils::HashString("prefix");

ClientCertificateIdentityFilterMatchType GetClientCertificateIdentityFilterMatchTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == exact_HASH) {
    return ClientCertificateIdentityFilterMatchType::exact;
  } else if (hashCode == prefix_HASH) {
    return ClientCertificateIdentityFilterMatchType::prefix;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientCertificateIdentityFilterMatchType>(hashCode);
  }

  return ClientCertificateIdentityFilterMatchType::NOT_SET;
}

Aws::String GetNameForClientCertificateIdentityFilterMatchType(ClientCertificateIdentityFilterMatchType enumValue) {
  switch (enumValue) {
    case ClientCertificateIdentityFilterMatchType::NOT_SET:
      return {};
    case ClientCertificateIdentityFilterMatchType::exact:
      return "exact";
    case ClientCertificateIdentityFilterMatchType::prefix:
      return "prefix";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientCertificateIdentityFilterMatchTypeMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
