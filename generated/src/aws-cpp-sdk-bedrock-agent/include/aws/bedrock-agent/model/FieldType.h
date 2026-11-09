/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgent {
namespace Model {
enum class FieldType { NOT_SET, STRING, STRING_LIST };

namespace FieldTypeMapper {
AWS_BEDROCKAGENT_API FieldType GetFieldTypeForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForFieldType(FieldType value);
}  // namespace FieldTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
