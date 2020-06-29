/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class TriggerEventType
  {
    NOT_SET,
    DeploymentStart,
    DeploymentSuccess,
    DeploymentFailure,
    DeploymentStop,
    DeploymentRollback,
    DeploymentReady,
    InstanceStart,
    InstanceSuccess,
    InstanceFailure,
    InstanceReady
  };

namespace TriggerEventTypeMapper
{
AWS_CODEDEPLOY_API TriggerEventType GetTriggerEventTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForTriggerEventType(TriggerEventType value);
} // namespace TriggerEventTypeMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
