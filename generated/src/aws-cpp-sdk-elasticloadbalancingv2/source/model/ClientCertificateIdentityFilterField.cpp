/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticloadbalancingv2/model/ClientCertificateIdentityFilterField.h>

using namespace Aws::Utils;

namespace Aws {
namespace ElasticLoadBalancingv2 {
namespace Model {
namespace ClientCertificateIdentityFilterFieldMapper {

static const int subject_cn_HASH = HashingUtils::HashString("subject-cn");
static const int subject_ou_HASH = HashingUtils::HashString("subject-ou");
static const int san_dns_HASH = HashingUtils::HashString("san-dns");
static const int san_uri_HASH = HashingUtils::HashString("san-uri");

ClientCertificateIdentityFilterField GetClientCertificateIdentityFilterFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == subject_cn_HASH) {
    return ClientCertificateIdentityFilterField::subject_cn;
  } else if (hashCode == subject_ou_HASH) {
    return ClientCertificateIdentityFilterField::subject_ou;
  } else if (hashCode == san_dns_HASH) {
    return ClientCertificateIdentityFilterField::san_dns;
  } else if (hashCode == san_uri_HASH) {
    return ClientCertificateIdentityFilterField::san_uri;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClientCertificateIdentityFilterField>(hashCode);
  }

  return ClientCertificateIdentityFilterField::NOT_SET;
}

Aws::String GetNameForClientCertificateIdentityFilterField(ClientCertificateIdentityFilterField enumValue) {
  switch (enumValue) {
    case ClientCertificateIdentityFilterField::NOT_SET:
      return {};
    case ClientCertificateIdentityFilterField::subject_cn:
      return "subject-cn";
    case ClientCertificateIdentityFilterField::subject_ou:
      return "subject-ou";
    case ClientCertificateIdentityFilterField::san_dns:
      return "san-dns";
    case ClientCertificateIdentityFilterField::san_uri:
      return "san-uri";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClientCertificateIdentityFilterFieldMapper
}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
