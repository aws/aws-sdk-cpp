/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
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
AWS_CODESTARCONNECTIONS_API PublishDeploymentStatus GetPublishDeploymentStatusForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForPublishDeploymentStatus(PublishDeploymentStatus value);
} // namespace PublishDeploymentStatusMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
