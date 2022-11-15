/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{
  enum class InstanceOnboardingJobFailureCode
  {
    NOT_SET,
    EVENT_BRIDGE_ACCESS_DENIED,
    EVENT_BRIDGE_MANAGED_RULE_LIMIT_EXCEEDED,
    IAM_ACCESS_DENIED,
    KMS_ACCESS_DENIED,
    KMS_KEY_NOT_FOUND,
    INTERNAL_FAILURE
  };

namespace InstanceOnboardingJobFailureCodeMapper
{
AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobFailureCode GetInstanceOnboardingJobFailureCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForInstanceOnboardingJobFailureCode(InstanceOnboardingJobFailureCode value);
} // namespace InstanceOnboardingJobFailureCodeMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
