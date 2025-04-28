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
  enum class CertificateTransparencyLoggingPreference
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace CertificateTransparencyLoggingPreferenceMapper
{
AWS_CLOUDFRONT_API CertificateTransparencyLoggingPreference GetCertificateTransparencyLoggingPreferenceForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference value);
} // namespace CertificateTransparencyLoggingPreferenceMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
