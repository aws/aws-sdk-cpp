/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class QueryLanguage
  {
    NOT_SET,
    CWLI,
    SQL,
    PPL
  };

namespace QueryLanguageMapper
{
AWS_CLOUDWATCHLOGS_API QueryLanguage GetQueryLanguageForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForQueryLanguage(QueryLanguage value);
} // namespace QueryLanguageMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
