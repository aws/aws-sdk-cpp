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
  enum class SnapshotFilterName
  {
    NOT_SET,
    file_system_id,
    volume_id
  };

namespace SnapshotFilterNameMapper
{
AWS_FSX_API SnapshotFilterName GetSnapshotFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotFilterName(SnapshotFilterName value);
} // namespace SnapshotFilterNameMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
