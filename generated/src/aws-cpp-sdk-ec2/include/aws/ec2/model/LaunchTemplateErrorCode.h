/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class LaunchTemplateErrorCode
  {
    NOT_SET,
    launchTemplateIdDoesNotExist,
    launchTemplateIdMalformed,
    launchTemplateNameDoesNotExist,
    launchTemplateNameMalformed,
    launchTemplateVersionDoesNotExist,
    unexpectedError
  };

namespace LaunchTemplateErrorCodeMapper
{
AWS_EC2_API LaunchTemplateErrorCode GetLaunchTemplateErrorCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForLaunchTemplateErrorCode(LaunchTemplateErrorCode value);
} // namespace LaunchTemplateErrorCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
