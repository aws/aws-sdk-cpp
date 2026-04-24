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
enum class GlossaryUsageRestriction { NOT_SET, ASSET_GOVERNED_TERMS };

namespace GlossaryUsageRestrictionMapper {
AWS_DATAZONE_API GlossaryUsageRestriction GetGlossaryUsageRestrictionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForGlossaryUsageRestriction(GlossaryUsageRestriction value);
}  // namespace GlossaryUsageRestrictionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
