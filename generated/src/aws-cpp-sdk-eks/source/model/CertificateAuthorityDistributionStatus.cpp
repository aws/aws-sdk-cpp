/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks/model/CertificateAuthorityDistributionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {
namespace CertificateAuthorityDistributionStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");

CertificateAuthorityDistributionStatus GetCertificateAuthorityDistributionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return CertificateAuthorityDistributionStatus::IN_PROGRESS;
  } else if (hashCode == COMPLETE_HASH) {
    return CertificateAuthorityDistributionStatus::COMPLETE;
  } else if (hashCode == FAILED_HASH) {
    return CertificateAuthorityDistributionStatus::FAILED;
  } else if (hashCode == DELETING_HASH) {
    return CertificateAuthorityDistributionStatus::DELETING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAuthorityDistributionStatus>(hashCode);
  }

  return CertificateAuthorityDistributionStatus::NOT_SET;
}

Aws::String GetNameForCertificateAuthorityDistributionStatus(CertificateAuthorityDistributionStatus enumValue) {
  switch (enumValue) {
    case CertificateAuthorityDistributionStatus::NOT_SET:
      return {};
    case CertificateAuthorityDistributionStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case CertificateAuthorityDistributionStatus::COMPLETE:
      return "COMPLETE";
    case CertificateAuthorityDistributionStatus::FAILED:
      return "FAILED";
    case CertificateAuthorityDistributionStatus::DELETING:
      return "DELETING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAuthorityDistributionStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
