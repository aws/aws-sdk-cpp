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
  enum class CertificateAuthorityType
  {
    NOT_SET,
    ROOT,
    SUBORDINATE
  };

namespace CertificateAuthorityTypeMapper
{
AWS_ACMPCA_API CertificateAuthorityType GetCertificateAuthorityTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForCertificateAuthorityType(CertificateAuthorityType value);
} // namespace CertificateAuthorityTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
