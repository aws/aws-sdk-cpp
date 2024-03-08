/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class VideoCapability
  {
    NOT_SET,
    SEND
  };

namespace VideoCapabilityMapper
{
AWS_CONNECT_API VideoCapability GetVideoCapabilityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVideoCapability(VideoCapability value);
} // namespace VideoCapabilityMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
