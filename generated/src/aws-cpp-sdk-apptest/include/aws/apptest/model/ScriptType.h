/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class ScriptType
  {
    NOT_SET,
    Selenium
  };

namespace ScriptTypeMapper
{
AWS_APPTEST_API ScriptType GetScriptTypeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForScriptType(ScriptType value);
} // namespace ScriptTypeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
