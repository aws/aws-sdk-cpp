/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class DesiredState
  {
    NOT_SET,
    RUNNING,
    STOPPED,
    REMOVED
  };

namespace DesiredStateMapper
{
AWS_PANORAMA_API DesiredState GetDesiredStateForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForDesiredState(DesiredState value);
} // namespace DesiredStateMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
