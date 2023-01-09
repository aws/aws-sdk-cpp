/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    Standard,
    IAM_Identity_Center
  };

namespace AuthenticationTypeMapper
{
AWS_WORKSPACESWEB_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
