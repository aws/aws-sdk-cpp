/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{
  enum class CloudFormationActionType
  {
    NOT_SET,
    Create,
    Delete
  };

namespace CloudFormationActionTypeMapper
{
AWS_APPTEST_API CloudFormationActionType GetCloudFormationActionTypeForName(const Aws::String& name);

AWS_APPTEST_API Aws::String GetNameForCloudFormationActionType(CloudFormationActionType value);
} // namespace CloudFormationActionTypeMapper
} // namespace Model
} // namespace AppTest
} // namespace Aws
