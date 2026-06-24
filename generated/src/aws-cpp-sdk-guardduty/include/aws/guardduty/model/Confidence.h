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
enum class Confidence { NOT_SET, Unknown, Low, Medium, High };

namespace ConfidenceMapper {
AWS_GUARDDUTY_API Confidence GetConfidenceForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForConfidence(Confidence value);
}  // namespace ConfidenceMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
