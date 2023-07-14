/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class CertificateType
  {
    NOT_SET,
    IMPORTED,
    AMAZON_ISSUED,
    PRIVATE_
  };

namespace CertificateTypeMapper
{
AWS_ACM_API CertificateType GetCertificateTypeForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateType(CertificateType value);
} // namespace CertificateTypeMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
