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
enum class CertificateAuthorityActivatedBy { NOT_SET, EKS, CUSTOMER };

namespace CertificateAuthorityActivatedByMapper {
AWS_EKS_API CertificateAuthorityActivatedBy GetCertificateAuthorityActivatedByForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForCertificateAuthorityActivatedBy(CertificateAuthorityActivatedBy value);
}  // namespace CertificateAuthorityActivatedByMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
