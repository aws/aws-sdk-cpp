/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class ManagedCertificateStatus
  {
    NOT_SET,
    pending_validation,
    issued,
    inactive,
    expired,
    validation_timed_out,
    revoked,
    failed
  };

namespace ManagedCertificateStatusMapper
{
AWS_CLOUDFRONT_API ManagedCertificateStatus GetManagedCertificateStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForManagedCertificateStatus(ManagedCertificateStatus value);
} // namespace ManagedCertificateStatusMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
