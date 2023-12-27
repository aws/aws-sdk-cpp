/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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

  class StartLiveTailInitialResponse
  {
  public:
    AWS_CLOUDWATCHLOGS_API StartLiveTailInitialResponse();
    AWS_CLOUDWATCHLOGS_API StartLiveTailInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API StartLiveTailInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
