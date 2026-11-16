/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class PeriodontalSiteName { NOT_SET, DB, B, MB, DL, L, ML };

namespace PeriodontalSiteNameMapper {
AWS_CONNECTHEALTH_API PeriodontalSiteName GetPeriodontalSiteNameForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForPeriodontalSiteName(PeriodontalSiteName value);
}  // namespace PeriodontalSiteNameMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
