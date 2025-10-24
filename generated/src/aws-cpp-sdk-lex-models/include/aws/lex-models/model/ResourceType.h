/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>

namespace Aws {
namespace LexModelBuildingService {
namespace Model {
enum class ResourceType { NOT_SET, BOT, INTENT, SLOT_TYPE };

namespace ResourceTypeMapper {
AWS_LEXMODELBUILDINGSERVICE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace LexModelBuildingService
}  // namespace Aws
