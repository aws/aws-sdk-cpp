/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class SnapshotLifecycle
  {
    NOT_SET,
    PENDING,
    CREATING,
    DELETING,
    AVAILABLE
  };

namespace SnapshotLifecycleMapper
{
AWS_FSX_API SnapshotLifecycle GetSnapshotLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotLifecycle(SnapshotLifecycle value);
} // namespace SnapshotLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
