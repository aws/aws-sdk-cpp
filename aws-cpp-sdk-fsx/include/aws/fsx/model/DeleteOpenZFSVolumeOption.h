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
  enum class DeleteOpenZFSVolumeOption
  {
    NOT_SET,
    DELETE_CHILD_VOLUMES_AND_SNAPSHOTS
  };

namespace DeleteOpenZFSVolumeOptionMapper
{
AWS_FSX_API DeleteOpenZFSVolumeOption GetDeleteOpenZFSVolumeOptionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDeleteOpenZFSVolumeOption(DeleteOpenZFSVolumeOption value);
} // namespace DeleteOpenZFSVolumeOptionMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
