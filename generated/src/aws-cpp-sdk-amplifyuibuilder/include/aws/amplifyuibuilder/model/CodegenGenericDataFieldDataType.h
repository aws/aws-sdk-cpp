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
  enum class CodegenGenericDataFieldDataType
  {
    NOT_SET,
    ID,
    String,
    Int,
    Float,
    AWSDate,
    AWSTime,
    AWSDateTime,
    AWSTimestamp,
    AWSEmail,
    AWSURL,
    AWSIPAddress,
    Boolean,
    AWSJSON,
    AWSPhone,
    Enum,
    Model,
    NonModel
  };

namespace CodegenGenericDataFieldDataTypeMapper
{
AWS_AMPLIFYUIBUILDER_API CodegenGenericDataFieldDataType GetCodegenGenericDataFieldDataTypeForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForCodegenGenericDataFieldDataType(CodegenGenericDataFieldDataType value);
} // namespace CodegenGenericDataFieldDataTypeMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
