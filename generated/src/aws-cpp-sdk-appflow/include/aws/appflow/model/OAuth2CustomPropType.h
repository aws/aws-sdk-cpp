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
  enum class OAuth2CustomPropType
  {
    NOT_SET,
    TOKEN_URL,
    AUTH_URL
  };

namespace OAuth2CustomPropTypeMapper
{
AWS_APPFLOW_API OAuth2CustomPropType GetOAuth2CustomPropTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForOAuth2CustomPropType(OAuth2CustomPropType value);
} // namespace OAuth2CustomPropTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
