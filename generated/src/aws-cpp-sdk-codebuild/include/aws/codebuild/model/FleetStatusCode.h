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
  enum class FleetStatusCode
  {
    NOT_SET,
    CREATING,
    UPDATING,
    ROTATING,
    DELETING,
    CREATE_FAILED,
    UPDATE_ROLLBACK_FAILED,
    ACTIVE
  };

namespace FleetStatusCodeMapper
{
AWS_CODEBUILD_API FleetStatusCode GetFleetStatusCodeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetStatusCode(FleetStatusCode value);
} // namespace FleetStatusCodeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
