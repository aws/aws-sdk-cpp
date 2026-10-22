/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class FindingStatus { NOT_SET, SUBMITTED, VALIDATING, CONFIRMED, DISCARDED };

namespace FindingStatusMapper {
AWS_CONTINUUM_API FindingStatus GetFindingStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingStatus(FindingStatus value);
}  // namespace FindingStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
