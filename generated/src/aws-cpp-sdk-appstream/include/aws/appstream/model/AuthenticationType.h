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
  enum class AuthenticationType
  {
    NOT_SET,
    API,
    SAML,
    USERPOOL,
    AWS_AD
  };

namespace AuthenticationTypeMapper
{
AWS_APPSTREAM_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
