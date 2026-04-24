/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class TimeOrdering { NOT_SET, ASCENDING, DESCENDING };

namespace TimeOrderingMapper {
AWS_IOTSITEWISE_API TimeOrdering GetTimeOrderingForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForTimeOrdering(TimeOrdering value);
}  // namespace TimeOrderingMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
