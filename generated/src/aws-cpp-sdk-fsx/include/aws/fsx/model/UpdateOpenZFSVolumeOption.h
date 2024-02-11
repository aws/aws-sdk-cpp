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
  enum class UpdateOpenZFSVolumeOption
  {
    NOT_SET,
    DELETE_INTERMEDIATE_SNAPSHOTS,
    DELETE_CLONED_VOLUMES,
    DELETE_INTERMEDIATE_DATA
  };

namespace UpdateOpenZFSVolumeOptionMapper
{
AWS_FSX_API UpdateOpenZFSVolumeOption GetUpdateOpenZFSVolumeOptionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForUpdateOpenZFSVolumeOption(UpdateOpenZFSVolumeOption value);
} // namespace UpdateOpenZFSVolumeOptionMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
