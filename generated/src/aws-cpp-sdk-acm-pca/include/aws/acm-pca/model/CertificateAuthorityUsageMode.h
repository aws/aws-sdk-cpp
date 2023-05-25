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
  enum class CertificateAuthorityUsageMode
  {
    NOT_SET,
    GENERAL_PURPOSE,
    SHORT_LIVED_CERTIFICATE
  };

namespace CertificateAuthorityUsageModeMapper
{
AWS_ACMPCA_API CertificateAuthorityUsageMode GetCertificateAuthorityUsageModeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForCertificateAuthorityUsageMode(CertificateAuthorityUsageMode value);
} // namespace CertificateAuthorityUsageModeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
