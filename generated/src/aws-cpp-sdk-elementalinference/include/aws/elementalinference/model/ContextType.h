/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class ContextType { NOT_SET, FRAMES, SUBTITLES, CONTEXTUAL_METADATA, CLIP_METADATA };

namespace ContextTypeMapper {
AWS_ELEMENTALINFERENCE_API ContextType GetContextTypeForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForContextType(ContextType value);
}  // namespace ContextTypeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
