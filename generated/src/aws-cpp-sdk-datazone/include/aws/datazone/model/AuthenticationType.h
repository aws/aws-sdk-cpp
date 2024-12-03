/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class AuthenticationType
  {
    NOT_SET,
    BASIC,
    OAUTH2,
    CUSTOM
  };

namespace AuthenticationTypeMapper
{
AWS_DATAZONE_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
} // namespace AuthenticationTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
