/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CertificateAuthorityActivatedBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CertificateAuthorityActivatedByMapper {

static const int EKS_HASH = HashingUtils::HashString("EKS");
static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");

CertificateAuthorityActivatedBy GetCertificateAuthorityActivatedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EKS_HASH) {
    return CertificateAuthorityActivatedBy::EKS;
  } else if (hashCode == CUSTOMER_HASH) {
    return CertificateAuthorityActivatedBy::CUSTOMER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAuthorityActivatedBy>(hashCode);
  }

  return CertificateAuthorityActivatedBy::NOT_SET;
}

Aws::String GetNameForCertificateAuthorityActivatedBy(CertificateAuthorityActivatedBy enumValue) {
  switch (enumValue) {
    case CertificateAuthorityActivatedBy::NOT_SET:
      return {};
    case CertificateAuthorityActivatedBy::EKS:
      return "EKS";
    case CertificateAuthorityActivatedBy::CUSTOMER:
      return "CUSTOMER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAuthorityActivatedByMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
