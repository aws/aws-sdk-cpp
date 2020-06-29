/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class CertificateAuthorityStatus
  {
    NOT_SET,
    CREATING,
    PENDING_CERTIFICATE,
    ACTIVE,
    DELETED,
    DISABLED,
    EXPIRED,
    FAILED
  };

namespace CertificateAuthorityStatusMapper
{
AWS_ACMPCA_API CertificateAuthorityStatus GetCertificateAuthorityStatusForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForCertificateAuthorityStatus(CertificateAuthorityStatus value);
} // namespace CertificateAuthorityStatusMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
