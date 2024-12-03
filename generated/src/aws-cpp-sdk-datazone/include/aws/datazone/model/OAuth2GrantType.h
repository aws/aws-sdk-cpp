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
  enum class OAuth2GrantType
  {
    NOT_SET,
    AUTHORIZATION_CODE,
    CLIENT_CREDENTIALS,
    JWT_BEARER
  };

namespace OAuth2GrantTypeMapper
{
AWS_DATAZONE_API OAuth2GrantType GetOAuth2GrantTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForOAuth2GrantType(OAuth2GrantType value);
} // namespace OAuth2GrantTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
