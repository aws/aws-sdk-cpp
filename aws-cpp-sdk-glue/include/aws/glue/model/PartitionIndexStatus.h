/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class PartitionIndexStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    DELETING,
    FAILED
  };

namespace PartitionIndexStatusMapper
{
AWS_GLUE_API PartitionIndexStatus GetPartitionIndexStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForPartitionIndexStatus(PartitionIndexStatus value);
} // namespace PartitionIndexStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
