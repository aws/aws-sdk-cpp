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
  enum class WorkspaceStatusCode
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATION_FAILED
  };

namespace WorkspaceStatusCodeMapper
{
AWS_PROMETHEUSSERVICE_API WorkspaceStatusCode GetWorkspaceStatusCodeForName(const Aws::String& name);

AWS_PROMETHEUSSERVICE_API Aws::String GetNameForWorkspaceStatusCode(WorkspaceStatusCode value);
} // namespace WorkspaceStatusCodeMapper
} // namespace Model
} // namespace PrometheusService
} // namespace Aws
