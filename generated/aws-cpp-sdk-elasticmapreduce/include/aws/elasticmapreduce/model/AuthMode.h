/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class AuthMode
  {
    NOT_SET,
    SSO,
    IAM
  };

namespace AuthModeMapper
{
AWS_EMR_API AuthMode GetAuthModeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForAuthMode(AuthMode value);
} // namespace AuthModeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
