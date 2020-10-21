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
  enum class RecrawlBehavior
  {
    NOT_SET,
    CRAWL_EVERYTHING,
    CRAWL_NEW_FOLDERS_ONLY
  };

namespace RecrawlBehaviorMapper
{
AWS_GLUE_API RecrawlBehavior GetRecrawlBehaviorForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForRecrawlBehavior(RecrawlBehavior value);
} // namespace RecrawlBehaviorMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
