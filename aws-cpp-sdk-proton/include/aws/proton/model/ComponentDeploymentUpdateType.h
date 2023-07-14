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
  enum class ComponentDeploymentUpdateType
  {
    NOT_SET,
    NONE,
    CURRENT_VERSION
  };

namespace ComponentDeploymentUpdateTypeMapper
{
AWS_PROTON_API ComponentDeploymentUpdateType GetComponentDeploymentUpdateTypeForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForComponentDeploymentUpdateType(ComponentDeploymentUpdateType value);
} // namespace ComponentDeploymentUpdateTypeMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
