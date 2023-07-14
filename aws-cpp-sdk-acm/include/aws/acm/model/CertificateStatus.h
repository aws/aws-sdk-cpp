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
  enum class CertificateStatus
  {
    NOT_SET,
    PENDING_VALIDATION,
    ISSUED,
    INACTIVE,
    EXPIRED,
    VALIDATION_TIMED_OUT,
    REVOKED,
    FAILED
  };

namespace CertificateStatusMapper
{
AWS_ACM_API CertificateStatus GetCertificateStatusForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateStatus(CertificateStatus value);
} // namespace CertificateStatusMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
