/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class SummaryStateType { NOT_SET, AVAILABLE, NOT_AVAILABLE, NOT_SUPPORTED, FAILED };

namespace SummaryStateTypeMapper {
AWS_IAM_API SummaryStateType GetSummaryStateTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForSummaryStateType(SummaryStateType value);
}  // namespace SummaryStateTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
