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
  enum class LambdaUngracefulBehavior
  {
    NOT_SET,
    skip
  };

namespace LambdaUngracefulBehaviorMapper
{
AWS_ARCREGIONSWITCH_API LambdaUngracefulBehavior GetLambdaUngracefulBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForLambdaUngracefulBehavior(LambdaUngracefulBehavior value);
} // namespace LambdaUngracefulBehaviorMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
