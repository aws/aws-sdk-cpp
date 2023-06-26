/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class RegistrationStatus
  {
    NOT_SET,
    COMPLETE,
    IN_PROGRESS,
    FAILED
  };

namespace RegistrationStatusMapper
{
AWS_CLOUDFORMATION_API RegistrationStatus GetRegistrationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForRegistrationStatus(RegistrationStatus value);
} // namespace RegistrationStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
