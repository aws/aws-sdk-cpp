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
  enum class CertificateManagedBy
  {
    NOT_SET,
    CLOUDFRONT
  };

namespace CertificateManagedByMapper
{
AWS_ACM_API CertificateManagedBy GetCertificateManagedByForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateManagedBy(CertificateManagedBy value);
} // namespace CertificateManagedByMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
