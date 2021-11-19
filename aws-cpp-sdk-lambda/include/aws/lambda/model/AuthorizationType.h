/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{
  enum class AuthorizationType
  {
    NOT_SET,
    NONE,
    AWS_IAM
  };

namespace AuthorizationTypeMapper
{
AWS_LAMBDA_API AuthorizationType GetAuthorizationTypeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForAuthorizationType(AuthorizationType value);
} // namespace AuthorizationTypeMapper
} // namespace Model
} // namespace Lambda
} // namespace Aws
