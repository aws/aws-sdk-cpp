/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class LogType
  {
    NOT_SET,
    INDEX_SLOW_LOGS,
    SEARCH_SLOW_LOGS,
    ES_APPLICATION_LOGS,
    AUDIT_LOGS
  };

namespace LogTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API LogType GetLogTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
