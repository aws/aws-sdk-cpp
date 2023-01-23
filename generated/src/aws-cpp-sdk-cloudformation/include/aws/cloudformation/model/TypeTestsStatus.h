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
  enum class TypeTestsStatus
  {
    NOT_SET,
    PASSED,
    FAILED,
    IN_PROGRESS,
    NOT_TESTED
  };

namespace TypeTestsStatusMapper
{
AWS_CLOUDFORMATION_API TypeTestsStatus GetTypeTestsStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForTypeTestsStatus(TypeTestsStatus value);
} // namespace TypeTestsStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
