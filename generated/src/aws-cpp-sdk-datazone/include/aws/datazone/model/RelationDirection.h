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
enum class RelationDirection { NOT_SET, IN, OUT };

namespace RelationDirectionMapper {
AWS_DATAZONE_API RelationDirection GetRelationDirectionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForRelationDirection(RelationDirection value);
}  // namespace RelationDirectionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
