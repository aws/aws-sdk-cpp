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
  enum class InstanceAction
  {
    NOT_SET,
    TERMINATE,
    KEEP_ALIVE
  };

namespace InstanceActionMapper
{
AWS_CODEDEPLOY_API InstanceAction GetInstanceActionForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForInstanceAction(InstanceAction value);
} // namespace InstanceActionMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
