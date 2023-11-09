/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class SnapshotBlockPublicAccessState
  {
    NOT_SET,
    block_all_sharing,
    block_new_sharing,
    unblocked
  };

namespace SnapshotBlockPublicAccessStateMapper
{
AWS_EC2_API SnapshotBlockPublicAccessState GetSnapshotBlockPublicAccessStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSnapshotBlockPublicAccessState(SnapshotBlockPublicAccessState value);
} // namespace SnapshotBlockPublicAccessStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
