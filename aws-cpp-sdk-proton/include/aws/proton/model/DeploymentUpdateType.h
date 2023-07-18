/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class DeploymentUpdateType
  {
    NOT_SET,
    NONE,
    CURRENT_VERSION,
    MINOR_VERSION,
    MAJOR_VERSION
  };

namespace DeploymentUpdateTypeMapper
{
AWS_PROTON_API DeploymentUpdateType GetDeploymentUpdateTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForDeploymentUpdateType(DeploymentUpdateType value);
} // namespace DeploymentUpdateTypeMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
