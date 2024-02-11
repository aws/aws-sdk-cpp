/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class HealthEventImpactType
  {
    NOT_SET,
    AVAILABILITY,
    PERFORMANCE,
    LOCAL_AVAILABILITY,
    LOCAL_PERFORMANCE
  };

namespace HealthEventImpactTypeMapper
{
AWS_INTERNETMONITOR_API HealthEventImpactType GetHealthEventImpactTypeForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForHealthEventImpactType(HealthEventImpactType value);
} // namespace HealthEventImpactTypeMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
