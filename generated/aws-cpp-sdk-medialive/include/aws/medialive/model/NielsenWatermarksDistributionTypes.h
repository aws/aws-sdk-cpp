/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class NielsenWatermarksDistributionTypes
  {
    NOT_SET,
    FINAL_DISTRIBUTOR,
    PROGRAM_CONTENT
  };

namespace NielsenWatermarksDistributionTypesMapper
{
AWS_MEDIALIVE_API NielsenWatermarksDistributionTypes GetNielsenWatermarksDistributionTypesForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNielsenWatermarksDistributionTypes(NielsenWatermarksDistributionTypes value);
} // namespace NielsenWatermarksDistributionTypesMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
