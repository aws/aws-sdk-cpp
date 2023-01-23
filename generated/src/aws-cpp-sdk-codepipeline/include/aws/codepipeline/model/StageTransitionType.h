/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class StageTransitionType
  {
    NOT_SET,
    Inbound,
    Outbound
  };

namespace StageTransitionTypeMapper
{
AWS_CODEPIPELINE_API StageTransitionType GetStageTransitionTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForStageTransitionType(StageTransitionType value);
} // namespace StageTransitionTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
