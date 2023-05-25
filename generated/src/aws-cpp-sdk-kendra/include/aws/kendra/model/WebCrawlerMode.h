/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class WebCrawlerMode
  {
    NOT_SET,
    HOST_ONLY,
    SUBDOMAINS,
    EVERYTHING
  };

namespace WebCrawlerModeMapper
{
AWS_KENDRA_API WebCrawlerMode GetWebCrawlerModeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForWebCrawlerMode(WebCrawlerMode value);
} // namespace WebCrawlerModeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
