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
enum class FindingSeverityId { NOT_SET, UNKNOWN, INFORMATIONAL, LOW, MEDIUM, HIGH, CRITICAL, FATAL, OTHER };

namespace FindingSeverityIdMapper {
AWS_CONTINUUM_API FindingSeverityId GetFindingSeverityIdForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForFindingSeverityId(FindingSeverityId value);
}  // namespace FindingSeverityIdMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
