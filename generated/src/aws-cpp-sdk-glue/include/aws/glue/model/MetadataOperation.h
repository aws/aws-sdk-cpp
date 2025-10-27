/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class MetadataOperation { NOT_SET, CREATE };

namespace MetadataOperationMapper {
AWS_GLUE_API MetadataOperation GetMetadataOperationForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForMetadataOperation(MetadataOperation value);
}  // namespace MetadataOperationMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
