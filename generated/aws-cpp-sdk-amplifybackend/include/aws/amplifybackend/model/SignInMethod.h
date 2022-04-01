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
  enum class SignInMethod
  {
    NOT_SET,
    EMAIL,
    EMAIL_AND_PHONE_NUMBER,
    PHONE_NUMBER,
    USERNAME
  };

namespace SignInMethodMapper
{
AWS_AMPLIFYBACKEND_API SignInMethod GetSignInMethodForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForSignInMethod(SignInMethod value);
} // namespace SignInMethodMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
