/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
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
AWS_LIGHTSAIL_API CertificateStatus GetCertificateStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForCertificateStatus(CertificateStatus value);
} // namespace CertificateStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
