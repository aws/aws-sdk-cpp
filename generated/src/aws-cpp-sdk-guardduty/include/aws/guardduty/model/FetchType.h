/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class FetchType {
  NOT_SET,
  FINDINGS,
  DETECTOR,
  REPUTATION,
  FINDING_TYPE_DOCUMENTATION,
  CLOUD_TRAIL_RAW_EVENTS,
  RUNTIME_SIGNALS,
  MEMBER_ACCOUNTS
};

namespace FetchTypeMapper {
AWS_GUARDDUTY_API FetchType GetFetchTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFetchType(FetchType value);
}  // namespace FetchTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
