/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class GraphEntityType { NOT_SET, LINEAGE_NODE };

namespace GraphEntityTypeMapper {
AWS_DATAZONE_API GraphEntityType GetGraphEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGraphEntityType(GraphEntityType value);
}  // namespace GraphEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
