/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  class GetLogObjectInitialResponse
  {
  public:
    AWS_CLOUDWATCHLOGS_API GetLogObjectInitialResponse() = default;
    AWS_CLOUDWATCHLOGS_API GetLogObjectInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API GetLogObjectInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API GetLogObjectInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
