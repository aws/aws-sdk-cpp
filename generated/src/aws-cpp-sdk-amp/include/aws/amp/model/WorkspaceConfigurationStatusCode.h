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
  enum class WorkspaceConfigurationStatusCode
  {
    NOT_SET,
    ACTIVE,
    UPDATING,
    UPDATE_FAILED
  };

namespace WorkspaceConfigurationStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API WorkspaceConfigurationStatusCode GetWorkspaceConfigurationStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForWorkspaceConfigurationStatusCode(WorkspaceConfigurationStatusCode value);
} // namespace WorkspaceConfigurationStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
