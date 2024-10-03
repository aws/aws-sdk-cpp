/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    CUSTOM_AUTH_X509,
    CUSTOM_AUTH,
    AWS_X509,
    AWS_SIGV4,
    DEFAULT
  };

namespace AuthenticationTypeMapper
{
AWS_IOT_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
