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
  enum class CallAs
  {
    NOT_SET,
    SELF,
    DELEGATED_ADMIN
  };

namespace CallAsMapper
{
AWS_CLOUDFORMATION_API CallAs GetCallAsForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForCallAs(CallAs value);
} // namespace CallAsMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
