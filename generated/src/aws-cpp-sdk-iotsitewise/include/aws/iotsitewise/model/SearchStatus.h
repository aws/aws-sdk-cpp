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
enum class SearchStatus { NOT_SET, QUEUED, RUNNING, SUCCEEDED, FAILED };

namespace SearchStatusMapper {
AWS_IOTSITEWISE_API SearchStatus GetSearchStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForSearchStatus(SearchStatus value);
}  // namespace SearchStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
