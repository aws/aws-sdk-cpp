/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class KubernetesResourcesTypes
  {
    NOT_SET,
    PODS,
    JOBS,
    CRONJOBS,
    DEPLOYMENTS,
    DAEMONSETS,
    STATEFULSETS,
    REPLICASETS,
    REPLICATIONCONTROLLERS
  };

namespace KubernetesResourcesTypesMapper
{
AWS_GUARDDUTY_API KubernetesResourcesTypes GetKubernetesResourcesTypesForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForKubernetesResourcesTypes(KubernetesResourcesTypes value);
} // namespace KubernetesResourcesTypesMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
