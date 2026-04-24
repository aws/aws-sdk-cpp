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
enum class SortFieldProject { NOT_SET, NAME };

namespace SortFieldProjectMapper {
AWS_DATAZONE_API SortFieldProject GetSortFieldProjectForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSortFieldProject(SortFieldProject value);
}  // namespace SortFieldProjectMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
