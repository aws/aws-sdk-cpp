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
  enum class JSModule
  {
    NOT_SET,
    es2020,
    esnext
  };

namespace JSModuleMapper
{
AWS_AMPLIFYUIBUILDER_API JSModule GetJSModuleForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForJSModule(JSModule value);
} // namespace JSModuleMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
