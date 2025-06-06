﻿/**
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
  enum class FeatureType
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace FeatureTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API FeatureType GetFeatureTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForFeatureType(FeatureType value);
} // namespace FeatureTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
