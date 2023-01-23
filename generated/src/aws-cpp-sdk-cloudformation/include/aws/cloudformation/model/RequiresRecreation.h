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
  enum class RequiresRecreation
  {
    NOT_SET,
    Never,
    Conditionally,
    Always
  };

namespace RequiresRecreationMapper
{
AWS_CLOUDFORMATION_API RequiresRecreation GetRequiresRecreationForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForRequiresRecreation(RequiresRecreation value);
} // namespace RequiresRecreationMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
