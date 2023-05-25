/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    OAUTH2,
    APIKEY,
    BASIC,
    CUSTOM
  };

namespace AuthenticationTypeMapper
{
AWS_APPFLOW_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
