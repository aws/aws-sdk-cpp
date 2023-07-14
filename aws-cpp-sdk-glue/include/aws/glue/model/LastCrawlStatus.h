/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class LastCrawlStatus
  {
    NOT_SET,
    SUCCEEDED,
    CANCELLED,
    FAILED
  };

namespace LastCrawlStatusMapper
{
AWS_GLUE_API LastCrawlStatus GetLastCrawlStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForLastCrawlStatus(LastCrawlStatus value);
} // namespace LastCrawlStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
