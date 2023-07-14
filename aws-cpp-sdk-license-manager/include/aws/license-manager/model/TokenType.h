/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class TokenType
  {
    NOT_SET,
    REFRESH_TOKEN
  };

namespace TokenTypeMapper
{
AWS_LICENSEMANAGER_API TokenType GetTokenTypeForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForTokenType(TokenType value);
} // namespace TokenTypeMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws
