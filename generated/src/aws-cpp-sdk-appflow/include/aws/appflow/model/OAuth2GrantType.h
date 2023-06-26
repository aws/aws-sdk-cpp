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
  enum class OAuth2GrantType
  {
    NOT_SET,
    CLIENT_CREDENTIALS,
    AUTHORIZATION_CODE,
    JWT_BEARER
  };

namespace OAuth2GrantTypeMapper
{
AWS_APPFLOW_API OAuth2GrantType GetOAuth2GrantTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForOAuth2GrantType(OAuth2GrantType value);
} // namespace OAuth2GrantTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
