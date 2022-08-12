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
  enum class LoggingConfigurationStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATION_FAILED,
    UPDATE_FAILED
  };

namespace LoggingConfigurationStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API LoggingConfigurationStatusCode GetLoggingConfigurationStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForLoggingConfigurationStatusCode(LoggingConfigurationStatusCode value);
} // namespace LoggingConfigurationStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
