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
  enum class IdentityProviderType
  {
    NOT_SET,
    SAML
  };

namespace IdentityProviderTypeMapper
{
AWS_WORKLINK_API IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name);

AWS_WORKLINK_API Aws::String GetNameForIdentityProviderType(IdentityProviderType value);
} // namespace IdentityProviderTypeMapper
} // namespace Model
} // namespace WorkLink
} // namespace Aws
