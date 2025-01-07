﻿/**
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
  enum class OpenSearchResourceStatusType
  {
    NOT_SET,
    ACTIVE,
    NOT_FOUND,
    ERROR_
  };

namespace OpenSearchResourceStatusTypeMapper
{
AWS_CLOUDWATCHLOGS_API OpenSearchResourceStatusType GetOpenSearchResourceStatusTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForOpenSearchResourceStatusType(OpenSearchResourceStatusType value);
} // namespace OpenSearchResourceStatusTypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
