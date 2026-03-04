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
enum class RelationType { NOT_SET, LINEAGE };

namespace RelationTypeMapper {
AWS_DATAZONE_API RelationType GetRelationTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRelationType(RelationType value);
}  // namespace RelationTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
