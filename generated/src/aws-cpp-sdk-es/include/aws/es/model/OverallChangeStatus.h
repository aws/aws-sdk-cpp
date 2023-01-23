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
  enum class OverallChangeStatus
  {
    NOT_SET,
    PENDING,
    PROCESSING,
    COMPLETED,
    FAILED
  };

namespace OverallChangeStatusMapper
{
AWS_ELASTICSEARCHSERVICE_API OverallChangeStatus GetOverallChangeStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForOverallChangeStatus(OverallChangeStatus value);
} // namespace OverallChangeStatusMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
