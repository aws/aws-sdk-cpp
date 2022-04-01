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
  enum class RestoreOpenZFSVolumeOption
  {
    NOT_SET,
    DELETE_INTERMEDIATE_SNAPSHOTS,
    DELETE_CLONED_VOLUMES
  };

namespace RestoreOpenZFSVolumeOptionMapper
{
AWS_FSX_API RestoreOpenZFSVolumeOption GetRestoreOpenZFSVolumeOptionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForRestoreOpenZFSVolumeOption(RestoreOpenZFSVolumeOption value);
} // namespace RestoreOpenZFSVolumeOptionMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
