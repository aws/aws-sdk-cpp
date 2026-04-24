/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/DLM_EXPORTS.h>

namespace Aws {
namespace DLM {
namespace Model {
enum class ResourceLocationValues { NOT_SET, CLOUD, OUTPOST, LOCAL_ZONE };

namespace ResourceLocationValuesMapper {
AWS_DLM_API ResourceLocationValues GetResourceLocationValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForResourceLocationValues(ResourceLocationValues value);
}  // namespace ResourceLocationValuesMapper
}  // namespace Model
}  // namespace DLM
}  // namespace Aws
