/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class ObservabilityConfigurationStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace ObservabilityConfigurationStatusMapper
{
AWS_APPRUNNER_API ObservabilityConfigurationStatus GetObservabilityConfigurationStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForObservabilityConfigurationStatus(ObservabilityConfigurationStatus value);
} // namespace ObservabilityConfigurationStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
