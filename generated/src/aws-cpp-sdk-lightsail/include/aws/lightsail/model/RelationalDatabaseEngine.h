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
enum class RelationalDatabaseEngine { NOT_SET, mysql };

namespace RelationalDatabaseEngineMapper {
AWS_LIGHTSAIL_API RelationalDatabaseEngine GetRelationalDatabaseEngineForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForRelationalDatabaseEngine(RelationalDatabaseEngine value);
}  // namespace RelationalDatabaseEngineMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
