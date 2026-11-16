/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Athena {
namespace Model {
enum class DatabaseAttributes { NOT_SET, NAME };

namespace DatabaseAttributesMapper {
AWS_ATHENA_API DatabaseAttributes GetDatabaseAttributesForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForDatabaseAttributes(DatabaseAttributes value);
}  // namespace DatabaseAttributesMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
