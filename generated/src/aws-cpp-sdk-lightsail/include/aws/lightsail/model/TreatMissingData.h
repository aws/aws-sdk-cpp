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
enum class TreatMissingData { NOT_SET, breaching, notBreaching, ignore, missing };

namespace TreatMissingDataMapper {
AWS_LIGHTSAIL_API TreatMissingData GetTreatMissingDataForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForTreatMissingData(TreatMissingData value);
}  // namespace TreatMissingDataMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
