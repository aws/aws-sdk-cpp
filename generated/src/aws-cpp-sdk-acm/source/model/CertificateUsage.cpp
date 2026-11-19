/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateUsage.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace CertificateUsageMapper {

static const int CLIENT_AND_SERVER_AUTH_HASH = HashingUtils::HashString("CLIENT_AND_SERVER_AUTH");
static const int CLIENT_AUTH_ONLY_HASH = HashingUtils::HashString("CLIENT_AUTH_ONLY");

CertificateUsage GetCertificateUsageForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLIENT_AND_SERVER_AUTH_HASH) {
    return CertificateUsage::CLIENT_AND_SERVER_AUTH;
  } else if (hashCode == CLIENT_AUTH_ONLY_HASH) {
    return CertificateUsage::CLIENT_AUTH_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateUsage>(hashCode);
  }

  return CertificateUsage::NOT_SET;
}

Aws::String GetNameForCertificateUsage(CertificateUsage enumValue) {
  switch (enumValue) {
    case CertificateUsage::NOT_SET:
      return {};
    case CertificateUsage::CLIENT_AND_SERVER_AUTH:
      return "CLIENT_AND_SERVER_AUTH";
    case CertificateUsage::CLIENT_AUTH_ONLY:
      return "CLIENT_AUTH_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateUsageMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
