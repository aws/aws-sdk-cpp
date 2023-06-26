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
  enum class ApplicationRevisionSortBy
  {
    NOT_SET,
    registerTime,
    firstUsedTime,
    lastUsedTime
  };

namespace ApplicationRevisionSortByMapper
{
AWS_CODEDEPLOY_API ApplicationRevisionSortBy GetApplicationRevisionSortByForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForApplicationRevisionSortBy(ApplicationRevisionSortBy value);
} // namespace ApplicationRevisionSortByMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
