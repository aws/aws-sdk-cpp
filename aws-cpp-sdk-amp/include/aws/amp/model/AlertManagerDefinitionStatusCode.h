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
  enum class AlertManagerDefinitionStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATION_FAILED,
    UPDATE_FAILED
  };

namespace AlertManagerDefinitionStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionStatusCode GetAlertManagerDefinitionStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForAlertManagerDefinitionStatusCode(AlertManagerDefinitionStatusCode value);
} // namespace AlertManagerDefinitionStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
