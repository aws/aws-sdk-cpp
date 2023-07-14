/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class Runtime
  {
    NOT_SET,
    PYTHON_3,
    NODEJS_12,
    NODEJS_14,
    CORRETTO_8,
    CORRETTO_11
  };

namespace RuntimeMapper
{
AWS_APPRUNNER_API Runtime GetRuntimeForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForRuntime(Runtime value);
} // namespace RuntimeMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
