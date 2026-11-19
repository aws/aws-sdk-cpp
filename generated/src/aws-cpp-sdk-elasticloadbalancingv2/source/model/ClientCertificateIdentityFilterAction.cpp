/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
namespace ClientCertificateIdentityFilterActionMapper {

static const int accept_HASH = HashingUtils::HashString("accept");

ClientCertificateIdentityFilterAction GetClientCertificateIdentityFilterActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == accept_HASH) {
    return ClientCertificateIdentityFilterAction::accept;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientCertificateIdentityFilterAction>(hashCode);
  }

  return ClientCertificateIdentityFilterAction::NOT_SET;
}

Aws::String GetNameForClientCertificateIdentityFilterAction(ClientCertificateIdentityFilterAction enumValue) {
  switch (enumValue) {
    case ClientCertificateIdentityFilterAction::NOT_SET:
      return {};
    case ClientCertificateIdentityFilterAction::accept:
      return "accept";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientCertificateIdentityFilterActionMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
