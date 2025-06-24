/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AuthorizationStatus
  {
    NOT_SET,
    AUTHORIZED,
    NOT_AUTHORIZED
  };

namespace AuthorizationStatusMapper
{
AWS_BEDROCK_API AuthorizationStatus GetAuthorizationStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAuthorizationStatus(AuthorizationStatus value);
} // namespace AuthorizationStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
