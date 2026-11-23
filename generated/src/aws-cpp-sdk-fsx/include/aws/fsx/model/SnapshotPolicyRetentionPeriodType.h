/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class SnapshotPolicyRetentionPeriodType { NOT_SET, SECONDS, MINUTES, HOURS, DAYS, MONTHS, YEARS, INFINITE };

namespace SnapshotPolicyRetentionPeriodTypeMapper {
AWS_FSX_API SnapshotPolicyRetentionPeriodType GetSnapshotPolicyRetentionPeriodTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotPolicyRetentionPeriodType(SnapshotPolicyRetentionPeriodType value);
}  // namespace SnapshotPolicyRetentionPeriodTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
