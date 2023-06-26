/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class ConfigFileState
  {
    NOT_SET,
    Present,
    Absent,
    PresentWithErrors
  };

namespace ConfigFileStateMapper
{
AWS_CODEGURUREVIEWER_API ConfigFileState GetConfigFileStateForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForConfigFileState(ConfigFileState value);
} // namespace ConfigFileStateMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
