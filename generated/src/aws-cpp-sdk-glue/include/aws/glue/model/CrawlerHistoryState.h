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
enum class CrawlerHistoryState { NOT_SET, RUNNING, COMPLETED, FAILED, STOPPED };

namespace CrawlerHistoryStateMapper {
AWS_GLUE_API CrawlerHistoryState GetCrawlerHistoryStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCrawlerHistoryState(CrawlerHistoryState value);
}  // namespace CrawlerHistoryStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
