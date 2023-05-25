/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class Stage
  {
    NOT_SET,
    PRODUCTION,
    BETA,
    DEVELOPMENT,
    EXPERIMENTAL,
    PULL_REQUEST
  };

namespace StageMapper
{
AWS_AMPLIFY_API Stage GetStageForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForStage(Stage value);
} // namespace StageMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
