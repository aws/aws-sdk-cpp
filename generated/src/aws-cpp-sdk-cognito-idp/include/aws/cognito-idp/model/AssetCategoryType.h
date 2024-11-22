/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class AssetCategoryType
  {
    NOT_SET,
    FAVICON_ICO,
    FAVICON_SVG,
    EMAIL_GRAPHIC,
    SMS_GRAPHIC,
    AUTH_APP_GRAPHIC,
    PASSWORD_GRAPHIC,
    PASSKEY_GRAPHIC,
    PAGE_HEADER_LOGO,
    PAGE_HEADER_BACKGROUND,
    PAGE_FOOTER_LOGO,
    PAGE_FOOTER_BACKGROUND,
    PAGE_BACKGROUND,
    FORM_BACKGROUND,
    FORM_LOGO,
    IDP_BUTTON_ICON
  };

namespace AssetCategoryTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AssetCategoryType GetAssetCategoryTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAssetCategoryType(AssetCategoryType value);
} // namespace AssetCategoryTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
