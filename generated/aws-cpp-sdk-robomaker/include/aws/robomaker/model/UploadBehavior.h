/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class UploadBehavior
  {
    NOT_SET,
    UPLOAD_ON_TERMINATE,
    UPLOAD_ROLLING_AUTO_REMOVE
  };

namespace UploadBehaviorMapper
{
AWS_ROBOMAKER_API UploadBehavior GetUploadBehaviorForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForUploadBehavior(UploadBehavior value);
} // namespace UploadBehaviorMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
