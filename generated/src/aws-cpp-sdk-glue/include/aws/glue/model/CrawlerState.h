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
enum class CrawlerState { NOT_SET, READY, RUNNING, STOPPING };

namespace CrawlerStateMapper {
AWS_GLUE_API CrawlerState GetCrawlerStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCrawlerState(CrawlerState value);
}  // namespace CrawlerStateMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
