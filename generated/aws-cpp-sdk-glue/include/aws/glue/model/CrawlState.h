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
  enum class CrawlState
  {
    NOT_SET,
    RUNNING,
    CANCELLING,
    CANCELLED,
    SUCCEEDED,
    FAILED
  };

namespace CrawlStateMapper
{
AWS_GLUE_API CrawlState GetCrawlStateForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCrawlState(CrawlState value);
} // namespace CrawlStateMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
