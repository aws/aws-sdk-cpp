/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class ListStateFilterAction
  {
    NOT_SET,
    include,
    exclude,
    ignore
  };

namespace ListStateFilterActionMapper
{
AWS_CODEDEPLOY_API ListStateFilterAction GetListStateFilterActionForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForListStateFilterAction(ListStateFilterAction value);
} // namespace ListStateFilterActionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
