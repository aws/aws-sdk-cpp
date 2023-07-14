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
  enum class ExtendedKeyUsageName
  {
    NOT_SET,
    TLS_WEB_SERVER_AUTHENTICATION,
    TLS_WEB_CLIENT_AUTHENTICATION,
    CODE_SIGNING,
    EMAIL_PROTECTION,
    TIME_STAMPING,
    OCSP_SIGNING,
    IPSEC_END_SYSTEM,
    IPSEC_TUNNEL,
    IPSEC_USER,
    ANY,
    NONE,
    CUSTOM
  };

namespace ExtendedKeyUsageNameMapper
{
AWS_ACM_API ExtendedKeyUsageName GetExtendedKeyUsageNameForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForExtendedKeyUsageName(ExtendedKeyUsageName value);
} // namespace ExtendedKeyUsageNameMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
