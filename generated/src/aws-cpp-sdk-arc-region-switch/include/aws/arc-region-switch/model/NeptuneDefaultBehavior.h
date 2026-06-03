/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
enum class NeptuneDefaultBehavior { NOT_SET, switchoverOnly, failover };

namespace NeptuneDefaultBehaviorMapper {
AWS_ARCREGIONSWITCH_API NeptuneDefaultBehavior GetNeptuneDefaultBehaviorForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForNeptuneDefaultBehavior(NeptuneDefaultBehavior value);
}  // namespace NeptuneDefaultBehaviorMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
