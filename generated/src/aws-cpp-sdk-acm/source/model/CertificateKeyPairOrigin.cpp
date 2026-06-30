/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateKeyPairOrigin.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace CertificateKeyPairOriginMapper {

static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
static const int ACME_HASH = HashingUtils::HashString("ACME");
static const int CUSTOMER_PROVIDED_HASH = HashingUtils::HashString("CUSTOMER_PROVIDED");

CertificateKeyPairOrigin GetCertificateKeyPairOriginForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_HASH) {
    return CertificateKeyPairOrigin::AWS_MANAGED;
  } else if (hashCode == ACME_HASH) {
    return CertificateKeyPairOrigin::ACME;
  } else if (hashCode == CUSTOMER_PROVIDED_HASH) {
    return CertificateKeyPairOrigin::CUSTOMER_PROVIDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateKeyPairOrigin>(hashCode);
  }

  return CertificateKeyPairOrigin::NOT_SET;
}

Aws::String GetNameForCertificateKeyPairOrigin(CertificateKeyPairOrigin enumValue) {
  switch (enumValue) {
    case CertificateKeyPairOrigin::NOT_SET:
      return {};
    case CertificateKeyPairOrigin::AWS_MANAGED:
      return "AWS_MANAGED";
    case CertificateKeyPairOrigin::ACME:
      return "ACME";
    case CertificateKeyPairOrigin::CUSTOMER_PROVIDED:
      return "CUSTOMER_PROVIDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateKeyPairOriginMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
