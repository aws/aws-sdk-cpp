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
enum class CertificateAuthoritySigningStatus { NOT_SET, NOT_USED, ACTIVATING, IN_USE };

namespace CertificateAuthoritySigningStatusMapper {
AWS_EKS_API CertificateAuthoritySigningStatus GetCertificateAuthoritySigningStatusForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCertificateAuthoritySigningStatus(CertificateAuthoritySigningStatus value);
}  // namespace CertificateAuthoritySigningStatusMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
