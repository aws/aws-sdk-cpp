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
  enum class NodeSignalValue
  {
    NOT_SET,
    PAUSE,
    RESUME
  };

namespace NodeSignalValueMapper
{
AWS_PANORAMA_API NodeSignalValue GetNodeSignalValueForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForNodeSignalValue(NodeSignalValue value);
} // namespace NodeSignalValueMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
