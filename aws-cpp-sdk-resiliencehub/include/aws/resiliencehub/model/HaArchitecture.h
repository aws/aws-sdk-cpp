/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class HaArchitecture
  {
    NOT_SET,
    MultiSite,
    WarmStandby,
    PilotLight,
    BackupAndRestore,
    NoRecoveryPlan
  };

namespace HaArchitectureMapper
{
AWS_RESILIENCEHUB_API HaArchitecture GetHaArchitectureForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForHaArchitecture(HaArchitecture value);
} // namespace HaArchitectureMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
