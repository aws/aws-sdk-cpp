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
  enum class ChangeAction
  {
    NOT_SET,
    Add,
    Modify,
    Remove,
    Import,
    Dynamic
  };

namespace ChangeActionMapper
{
AWS_CLOUDFORMATION_API ChangeAction GetChangeActionForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeAction(ChangeAction value);
} // namespace ChangeActionMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
