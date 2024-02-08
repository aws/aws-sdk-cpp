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
  enum class FleetSortByType
  {
    NOT_SET,
    NAME,
    CREATED_TIME,
    LAST_MODIFIED_TIME
  };

namespace FleetSortByTypeMapper
{
AWS_CODEBUILD_API FleetSortByType GetFleetSortByTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFleetSortByType(FleetSortByType value);
} // namespace FleetSortByTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
