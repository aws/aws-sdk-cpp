/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class CertificateAuthorityDistributionStatus { NOT_SET, IN_PROGRESS, COMPLETE, FAILED, DELETING };

namespace CertificateAuthorityDistributionStatusMapper {
AWS_EKS_API CertificateAuthorityDistributionStatus GetCertificateAuthorityDistributionStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCertificateAuthorityDistributionStatus(CertificateAuthorityDistributionStatus value);
}  // namespace CertificateAuthorityDistributionStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
