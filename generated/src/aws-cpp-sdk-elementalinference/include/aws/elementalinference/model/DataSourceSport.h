/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class DataSourceSport { NOT_SET, basketball, american_football };

namespace DataSourceSportMapper {
AWS_ELEMENTALINFERENCE_API DataSourceSport GetDataSourceSportForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForDataSourceSport(DataSourceSport value);
}  // namespace DataSourceSportMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
