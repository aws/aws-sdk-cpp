/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AuthorizerStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AuthorizerStatusMapper
{
AWS_IOT_API AuthorizerStatus GetAuthorizerStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuthorizerStatus(AuthorizerStatus value);
} // namespace AuthorizerStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
