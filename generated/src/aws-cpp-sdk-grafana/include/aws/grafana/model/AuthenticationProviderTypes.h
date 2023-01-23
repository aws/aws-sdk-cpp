/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class AuthenticationProviderTypes
  {
    NOT_SET,
    AWS_SSO,
    SAML
  };

namespace AuthenticationProviderTypesMapper
{
AWS_MANAGEDGRAFANA_API AuthenticationProviderTypes GetAuthenticationProviderTypesForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForAuthenticationProviderTypes(AuthenticationProviderTypes value);
} // namespace AuthenticationProviderTypesMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
