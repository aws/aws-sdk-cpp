/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkLink
{
namespace Model
{
  enum class AuthorizationProviderType
  {
    NOT_SET,
    SAML
  };

namespace AuthorizationProviderTypeMapper
{
AWS_WORKLINK_API AuthorizationProviderType GetAuthorizationProviderTypeForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForAuthorizationProviderType(AuthorizationProviderType value);
} // namespace AuthorizationProviderTypeMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws
