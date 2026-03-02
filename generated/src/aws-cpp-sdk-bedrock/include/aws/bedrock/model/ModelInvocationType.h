/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Bedrock {
namespace Model {
enum class ModelInvocationType { NOT_SET, InvokeModel, Converse };

namespace ModelInvocationTypeMapper {
AWS_BEDROCK_API ModelInvocationType GetModelInvocationTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelInvocationType(ModelInvocationType value);
}  // namespace ModelInvocationTypeMapper
}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
