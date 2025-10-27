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
enum class GovernedEntityType { NOT_SET, ASSET };

namespace GovernedEntityTypeMapper {
AWS_DATAZONE_API GovernedEntityType GetGovernedEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGovernedEntityType(GovernedEntityType value);
}  // namespace GovernedEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
