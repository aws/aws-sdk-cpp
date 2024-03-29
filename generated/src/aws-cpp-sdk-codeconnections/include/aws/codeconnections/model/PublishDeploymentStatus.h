/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class PublishDeploymentStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PublishDeploymentStatusMapper
{
AWS_CODECONNECTIONS_API PublishDeploymentStatus GetPublishDeploymentStatusForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForPublishDeploymentStatus(PublishDeploymentStatus value);
} // namespace PublishDeploymentStatusMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
