/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class Status
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING
  };

namespace StatusMapper
{
AWS_KINESISVIDEO_API Status GetStatusForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
