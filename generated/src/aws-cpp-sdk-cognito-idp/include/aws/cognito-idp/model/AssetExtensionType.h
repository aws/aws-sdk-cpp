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
  enum class AssetExtensionType
  {
    NOT_SET,
    ICO,
    JPEG,
    PNG,
    SVG,
    WEBP
  };

namespace AssetExtensionTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API AssetExtensionType GetAssetExtensionTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForAssetExtensionType(AssetExtensionType value);
} // namespace AssetExtensionTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
