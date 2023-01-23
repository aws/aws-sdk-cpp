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
  enum class ActionOwner
  {
    NOT_SET,
    AWS,
    ThirdParty,
    Custom
  };

namespace ActionOwnerMapper
{
AWS_CODEPIPELINE_API ActionOwner GetActionOwnerForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForActionOwner(ActionOwner value);
} // namespace ActionOwnerMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
