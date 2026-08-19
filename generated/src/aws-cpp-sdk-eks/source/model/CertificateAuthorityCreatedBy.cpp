/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CertificateAuthorityCreatedBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CertificateAuthorityCreatedByMapper {

static const int EKS_HASH = HashingUtils::HashString("EKS");
static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");

CertificateAuthorityCreatedBy GetCertificateAuthorityCreatedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EKS_HASH) {
    return CertificateAuthorityCreatedBy::EKS;
  } else if (hashCode == CUSTOMER_HASH) {
    return CertificateAuthorityCreatedBy::CUSTOMER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAuthorityCreatedBy>(hashCode);
  }

  return CertificateAuthorityCreatedBy::NOT_SET;
}

Aws::String GetNameForCertificateAuthorityCreatedBy(CertificateAuthorityCreatedBy enumValue) {
  switch (enumValue) {
    case CertificateAuthorityCreatedBy::NOT_SET:
      return {};
    case CertificateAuthorityCreatedBy::EKS:
      return "EKS";
    case CertificateAuthorityCreatedBy::CUSTOMER:
      return "CUSTOMER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAuthorityCreatedByMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
