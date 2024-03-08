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
  enum class DetailedStatus
  {
    NOT_SET,
    CONFIGURATION_COMPLETE,
    VALIDATION_FAILED
  };

namespace DetailedStatusMapper
{
AWS_CLOUDFORMATION_API DetailedStatus GetDetailedStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForDetailedStatus(DetailedStatus value);
} // namespace DetailedStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
