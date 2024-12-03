/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class DeploymentMode
  {
    NOT_SET,
    ON_CREATE,
    ON_DEMAND
  };

namespace DeploymentModeMapper
{
AWS_DATAZONE_API DeploymentMode GetDeploymentModeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForDeploymentMode(DeploymentMode value);
} // namespace DeploymentModeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
