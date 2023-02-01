/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class CertificateBasedAuthStatus
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    ENABLED_NO_DIRECTORY_LOGIN_FALLBACK
  };

namespace CertificateBasedAuthStatusMapper
{
AWS_APPSTREAM_API CertificateBasedAuthStatus GetCertificateBasedAuthStatusForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForCertificateBasedAuthStatus(CertificateBasedAuthStatus value);
} // namespace CertificateBasedAuthStatusMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
