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
enum class DatabaseAttributes { NOT_SET, NAME, TARGET_DATABASE };

namespace DatabaseAttributesMapper {
AWS_GLUE_API DatabaseAttributes GetDatabaseAttributesForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDatabaseAttributes(DatabaseAttributes value);
}  // namespace DatabaseAttributesMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
