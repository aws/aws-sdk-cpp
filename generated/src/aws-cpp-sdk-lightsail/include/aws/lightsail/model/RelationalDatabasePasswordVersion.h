/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class RelationalDatabasePasswordVersion { NOT_SET, CURRENT, PREVIOUS, PENDING };

namespace RelationalDatabasePasswordVersionMapper {
AWS_LIGHTSAIL_API RelationalDatabasePasswordVersion GetRelationalDatabasePasswordVersionForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRelationalDatabasePasswordVersion(RelationalDatabasePasswordVersion value);
}  // namespace RelationalDatabasePasswordVersionMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
