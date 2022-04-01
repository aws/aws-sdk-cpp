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
  enum class TimeUnit
  {
    NOT_SET,
    HOURS
  };

namespace TimeUnitMapper
{
AWS_ELASTICSEARCHSERVICE_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
