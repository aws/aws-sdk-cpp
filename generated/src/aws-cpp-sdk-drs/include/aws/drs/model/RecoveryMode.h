/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class RecoveryMode { NOT_SET, FAST, OPTIMAL };

namespace RecoveryModeMapper {
AWS_DRS_API RecoveryMode GetRecoveryModeForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryMode(RecoveryMode value);
}  // namespace RecoveryModeMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
