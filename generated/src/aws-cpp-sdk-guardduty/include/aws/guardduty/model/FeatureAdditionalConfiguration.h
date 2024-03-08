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
  enum class FeatureAdditionalConfiguration
  {
    NOT_SET,
    EKS_ADDON_MANAGEMENT,
    ECS_FARGATE_AGENT_MANAGEMENT
  };

namespace FeatureAdditionalConfigurationMapper
{
AWS_GUARDDUTY_API FeatureAdditionalConfiguration GetFeatureAdditionalConfigurationForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFeatureAdditionalConfiguration(FeatureAdditionalConfiguration value);
} // namespace FeatureAdditionalConfigurationMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
