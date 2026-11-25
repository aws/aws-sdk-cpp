/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elb-proxy/model/CertificateAssociationStatusCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {
namespace CertificateAssociationStatusCodeMapper {

static const int associate_in_progress_HASH = HashingUtils::HashString("associate-in-progress");
static const int active_HASH = HashingUtils::HashString("active");
static const int associate_failed_HASH = HashingUtils::HashString("associate-failed");
static const int disassociate_in_progress_HASH = HashingUtils::HashString("disassociate-in-progress");
static const int disassociated_HASH = HashingUtils::HashString("disassociated");

CertificateAssociationStatusCode GetCertificateAssociationStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == associate_in_progress_HASH) {
    return CertificateAssociationStatusCode::associate_in_progress;
  } else if (hashCode == active_HASH) {
    return CertificateAssociationStatusCode::active;
  } else if (hashCode == associate_failed_HASH) {
    return CertificateAssociationStatusCode::associate_failed;
  } else if (hashCode == disassociate_in_progress_HASH) {
    return CertificateAssociationStatusCode::disassociate_in_progress;
  } else if (hashCode == disassociated_HASH) {
    return CertificateAssociationStatusCode::disassociated;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CertificateAssociationStatusCode>(hashCode);
  }

  return CertificateAssociationStatusCode::NOT_SET;
}

Aws::String GetNameForCertificateAssociationStatusCode(CertificateAssociationStatusCode enumValue) {
  switch (enumValue) {
    case CertificateAssociationStatusCode::NOT_SET:
      return {};
    case CertificateAssociationStatusCode::associate_in_progress:
      return "associate-in-progress";
    case CertificateAssociationStatusCode::active:
      return "active";
    case CertificateAssociationStatusCode::associate_failed:
      return "associate-failed";
    case CertificateAssociationStatusCode::disassociate_in_progress:
      return "disassociate-in-progress";
    case CertificateAssociationStatusCode::disassociated:
      return "disassociated";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CertificateAssociationStatusCodeMapper
}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
