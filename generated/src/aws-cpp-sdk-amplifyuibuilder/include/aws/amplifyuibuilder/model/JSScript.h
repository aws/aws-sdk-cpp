/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{
  enum class JSScript
  {
    NOT_SET,
    jsx,
    tsx,
    js
  };

namespace JSScriptMapper
{
AWS_AMPLIFYUIBUILDER_API JSScript GetJSScriptForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForJSScript(JSScript value);
} // namespace JSScriptMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
