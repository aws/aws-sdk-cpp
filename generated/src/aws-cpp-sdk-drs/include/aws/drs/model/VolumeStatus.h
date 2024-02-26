/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class VolumeStatus
  {
    NOT_SET,
    REGULAR,
    CONTAINS_MARKETPLACE_PRODUCT_CODES,
    MISSING_VOLUME_ATTRIBUTES,
    MISSING_VOLUME_ATTRIBUTES_AND_PRECHECK_UNAVAILABLE
  };

namespace VolumeStatusMapper
{
AWS_DRS_API VolumeStatus GetVolumeStatusForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForVolumeStatus(VolumeStatus value);
} // namespace VolumeStatusMapper
} // namespace Model
} // namespace drs
} // namespace Aws
