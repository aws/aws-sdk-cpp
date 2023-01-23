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
  enum class FileExistsBehavior
  {
    NOT_SET,
    DISALLOW,
    OVERWRITE,
    RETAIN
  };

namespace FileExistsBehaviorMapper
{
AWS_CODEDEPLOY_API FileExistsBehavior GetFileExistsBehaviorForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForFileExistsBehavior(FileExistsBehavior value);
} // namespace FileExistsBehaviorMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
