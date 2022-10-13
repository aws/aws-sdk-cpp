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
  enum class NodeInstanceStatus
  {
    NOT_SET,
    RUNNING,
    ERROR_,
    NOT_AVAILABLE,
    PAUSED
  };

namespace NodeInstanceStatusMapper
{
AWS_PANORAMA_API NodeInstanceStatus GetNodeInstanceStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForNodeInstanceStatus(NodeInstanceStatus value);
} // namespace NodeInstanceStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
