/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class FleetContextCode
  {
    NOT_SET,
    CREATE_FAILED,
    UPDATE_FAILED
  };

namespace FleetContextCodeMapper
{
AWS_CODEBUILD_API FleetContextCode GetFleetContextCodeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetContextCode(FleetContextCode value);
} // namespace FleetContextCodeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
