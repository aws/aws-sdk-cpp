/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AbuseSignal {
namespace Model {
enum class ReasonCode {
  NOT_SET,
  ACTIONED,
  NOT_RESOLVABLE_TO_AWS,
  REVIEWED_NO_AWS_ACTION,
  CONTENT_DOWN_OR_INACCESSIBLE,
  NEED_MORE_INFORMATION
};

namespace ReasonCodeMapper {
AWS_ABUSESIGNAL_API ReasonCode GetReasonCodeForName(const Aws::String& name);

AWS_ABUSESIGNAL_API Aws::String GetNameForReasonCode(ReasonCode value);
}  // namespace ReasonCodeMapper
}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
