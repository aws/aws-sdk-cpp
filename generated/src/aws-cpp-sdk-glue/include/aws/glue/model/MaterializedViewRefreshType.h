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
enum class MaterializedViewRefreshType { NOT_SET, FULL, INCREMENTAL };

namespace MaterializedViewRefreshTypeMapper {
AWS_GLUE_API MaterializedViewRefreshType GetMaterializedViewRefreshTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForMaterializedViewRefreshType(MaterializedViewRefreshType value);
}  // namespace MaterializedViewRefreshTypeMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
