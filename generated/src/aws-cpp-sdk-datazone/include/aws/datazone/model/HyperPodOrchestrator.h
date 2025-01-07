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
  enum class HyperPodOrchestrator
  {
    NOT_SET,
    EKS,
    SLURM
  };

namespace HyperPodOrchestratorMapper
{
AWS_DATAZONE_API HyperPodOrchestrator GetHyperPodOrchestratorForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForHyperPodOrchestrator(HyperPodOrchestrator value);
} // namespace HyperPodOrchestratorMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
