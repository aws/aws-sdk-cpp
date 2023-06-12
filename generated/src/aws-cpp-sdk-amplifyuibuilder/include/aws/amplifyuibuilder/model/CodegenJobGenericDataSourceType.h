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
  enum class CodegenJobGenericDataSourceType
  {
    NOT_SET,
    DataStore
  };

namespace CodegenJobGenericDataSourceTypeMapper
{
AWS_AMPLIFYUIBUILDER_API CodegenJobGenericDataSourceType GetCodegenJobGenericDataSourceTypeForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForCodegenJobGenericDataSourceType(CodegenJobGenericDataSourceType value);
} // namespace CodegenJobGenericDataSourceTypeMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
