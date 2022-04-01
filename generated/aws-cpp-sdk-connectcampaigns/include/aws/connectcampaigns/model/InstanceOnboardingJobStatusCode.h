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
  enum class InstanceOnboardingJobStatusCode
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace InstanceOnboardingJobStatusCodeMapper
{
AWS_CONNECTCAMPAIGNS_API InstanceOnboardingJobStatusCode GetInstanceOnboardingJobStatusCodeForName(const Aws::String& name);

AWS_CONNECTCAMPAIGNS_API Aws::String GetNameForInstanceOnboardingJobStatusCode(InstanceOnboardingJobStatusCode value);
} // namespace InstanceOnboardingJobStatusCodeMapper
} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
