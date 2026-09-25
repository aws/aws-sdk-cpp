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
enum class ServiceQuotaWarningStatus {
  NOT_SET,
  pending,
  denied,
  insufficientPermissions,
  maxRegionSwitchRequestsExceeded,
  maxAccountRequestsExceeded
};

namespace ServiceQuotaWarningStatusMapper {
AWS_ARCREGIONSWITCH_API ServiceQuotaWarningStatus GetServiceQuotaWarningStatusForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForServiceQuotaWarningStatus(ServiceQuotaWarningStatus value);
}  // namespace ServiceQuotaWarningStatusMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
