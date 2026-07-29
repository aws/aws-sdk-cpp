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
enum class QueryStatus { NOT_SET, SUBMITTED, RUNNING, COMPLETED, FAILED, CANCELED, CANCELING };

namespace QueryStatusMapper {
AWS_IOTSITEWISE_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForQueryStatus(QueryStatus value);
}  // namespace QueryStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
