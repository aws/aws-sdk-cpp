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
  enum class JSTarget
  {
    NOT_SET,
    es2015,
    es2020
  };

namespace JSTargetMapper
{
AWS_AMPLIFYUIBUILDER_API JSTarget GetJSTargetForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForJSTarget(JSTarget value);
} // namespace JSTargetMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
