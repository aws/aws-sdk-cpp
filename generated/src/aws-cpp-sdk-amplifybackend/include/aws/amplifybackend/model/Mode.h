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
  enum class Mode
  {
    NOT_SET,
    API_KEY,
    AWS_IAM,
    AMAZON_COGNITO_USER_POOLS,
    OPENID_CONNECT
  };

namespace ModeMapper
{
AWS_AMPLIFYBACKEND_API Mode GetModeForName(const Aws::String& name);

AWS_AMPLIFYBACKEND_API Aws::String GetNameForMode(Mode value);
} // namespace ModeMapper
} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
