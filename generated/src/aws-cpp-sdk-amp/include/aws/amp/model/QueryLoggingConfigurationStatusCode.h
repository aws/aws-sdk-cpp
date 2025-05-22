/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{
  enum class QueryLoggingConfigurationStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATION_FAILED,
    UPDATE_FAILED
  };

namespace QueryLoggingConfigurationStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API QueryLoggingConfigurationStatusCode GetQueryLoggingConfigurationStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForQueryLoggingConfigurationStatusCode(QueryLoggingConfigurationStatusCode value);
} // namespace QueryLoggingConfigurationStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
