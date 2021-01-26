/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SMS
{
namespace Model
{
  enum class ScriptType
  {
    NOT_SET,
    SHELL_SCRIPT,
    POWERSHELL_SCRIPT
  };

namespace ScriptTypeMapper
{
AWS_SMS_API ScriptType GetScriptTypeForName(const Aws::String& name);

AWS_SMS_API Aws::String GetNameForScriptType(ScriptType value);
} // namespace ScriptTypeMapper
} // namespace Model
} // namespace SMS
} // namespace Aws
