/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{
  enum class OAuthGrantType
  {
    NOT_SET,
    CODE,
    IMPLICIT
  };

namespace OAuthGrantTypeMapper
{
AWS_AMPLIFYBACKEND_API OAuthGrantType GetOAuthGrantTypeForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForOAuthGrantType(OAuthGrantType value);
} // namespace OAuthGrantTypeMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
