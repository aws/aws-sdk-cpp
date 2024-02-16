/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class TagrisStatus
  {
    NOT_SET,
    ACTIVE,
    NOT_ACTIVE
  };

namespace TagrisStatusMapper
{
AWS_FIREHOSE_API TagrisStatus GetTagrisStatusForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForTagrisStatus(TagrisStatus value);
} // namespace TagrisStatusMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
