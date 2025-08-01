/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class RecoveryApproach
  {
    NOT_SET,
    activeActive,
    activePassive
  };

namespace RecoveryApproachMapper
{
AWS_ARCREGIONSWITCH_API RecoveryApproach GetRecoveryApproachForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForRecoveryApproach(RecoveryApproach value);
} // namespace RecoveryApproachMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
