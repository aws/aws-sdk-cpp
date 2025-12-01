/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRoomsML {
namespace Model {
enum class SyntheticDataColumnType { NOT_SET, CATEGORICAL, NUMERICAL };

namespace SyntheticDataColumnTypeMapper {
AWS_CLEANROOMSML_API SyntheticDataColumnType GetSyntheticDataColumnTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForSyntheticDataColumnType(SyntheticDataColumnType value);
}  // namespace SyntheticDataColumnTypeMapper
}  // namespace Model
}  // namespace CleanRoomsML
}  // namespace Aws
