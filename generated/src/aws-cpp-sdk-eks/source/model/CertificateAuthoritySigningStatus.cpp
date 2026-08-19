/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CertificateAuthoritySigningStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CertificateAuthoritySigningStatusMapper {

static const int NOT_USED_HASH = HashingUtils::HashString("NOT_USED");
static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");

CertificateAuthoritySigningStatus GetCertificateAuthoritySigningStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NOT_USED_HASH) {
    return CertificateAuthoritySigningStatus::NOT_USED;
  } else if (hashCode == ACTIVATING_HASH) {
    return CertificateAuthoritySigningStatus::ACTIVATING;
  } else if (hashCode == IN_USE_HASH) {
    return CertificateAuthoritySigningStatus::IN_USE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAuthoritySigningStatus>(hashCode);
  }

  return CertificateAuthoritySigningStatus::NOT_SET;
}

Aws::String GetNameForCertificateAuthoritySigningStatus(CertificateAuthoritySigningStatus enumValue) {
  switch (enumValue) {
    case CertificateAuthoritySigningStatus::NOT_SET:
      return {};
    case CertificateAuthoritySigningStatus::NOT_USED:
      return "NOT_USED";
    case CertificateAuthoritySigningStatus::ACTIVATING:
      return "ACTIVATING";
    case CertificateAuthoritySigningStatus::IN_USE:
      return "IN_USE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAuthoritySigningStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
