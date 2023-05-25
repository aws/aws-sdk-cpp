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
  enum class PreventUserExistenceErrorTypes
  {
    NOT_SET,
    LEGACY,
    ENABLED
  };

namespace PreventUserExistenceErrorTypesMapper
{
AWS_COGNITOIDENTITYPROVIDER_API PreventUserExistenceErrorTypes GetPreventUserExistenceErrorTypesForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForPreventUserExistenceErrorTypes(PreventUserExistenceErrorTypes value);
} // namespace PreventUserExistenceErrorTypesMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
