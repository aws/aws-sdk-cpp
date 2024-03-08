/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class QueryStatus
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    SUCCEEDED,
    FAILED,
    CANCELED
  };

namespace QueryStatusMapper
{
AWS_INTERNETMONITOR_API QueryStatus GetQueryStatusForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForQueryStatus(QueryStatus value);
} // namespace QueryStatusMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
