/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class FleetIndexingApi { NOT_SET, GET_THING_CONNECTIVITY_DATA };

namespace FleetIndexingApiMapper {
AWS_IOT_API FleetIndexingApi GetFleetIndexingApiForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForFleetIndexingApi(FleetIndexingApi value);
}  // namespace FleetIndexingApiMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
