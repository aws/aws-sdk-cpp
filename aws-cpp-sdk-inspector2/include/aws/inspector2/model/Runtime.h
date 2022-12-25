/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Runtime
  {
    NOT_SET,
    NODEJS,
    NODEJS_12_X,
    NODEJS_14_X,
    NODEJS_16_X,
    JAVA_8,
    JAVA_8_AL2,
    JAVA_11,
    PYTHON_3_7,
    PYTHON_3_8,
    PYTHON_3_9,
    UNSUPPORTED,
    NODEJS_18_X,
    GO_1_X
  };

namespace RuntimeMapper
{
AWS_INSPECTOR2_API Runtime GetRuntimeForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForRuntime(Runtime value);
} // namespace RuntimeMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
