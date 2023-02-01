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
  enum class CertificateTransparencyLoggingPreference
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace CertificateTransparencyLoggingPreferenceMapper
{
AWS_ACM_API CertificateTransparencyLoggingPreference GetCertificateTransparencyLoggingPreferenceForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateTransparencyLoggingPreference(CertificateTransparencyLoggingPreference value);
} // namespace CertificateTransparencyLoggingPreferenceMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
