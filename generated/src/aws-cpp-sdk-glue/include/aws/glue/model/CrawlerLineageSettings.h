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
  enum class CrawlerLineageSettings
  {
    NOT_SET,
    ENABLE,
    DISABLE
  };

namespace CrawlerLineageSettingsMapper
{
AWS_GLUE_API CrawlerLineageSettings GetCrawlerLineageSettingsForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForCrawlerLineageSettings(CrawlerLineageSettings value);
} // namespace CrawlerLineageSettingsMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
