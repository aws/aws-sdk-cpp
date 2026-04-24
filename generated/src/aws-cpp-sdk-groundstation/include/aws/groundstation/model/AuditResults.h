/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class AuditResults { NOT_SET, HEALTHY, UNHEALTHY };

namespace AuditResultsMapper {
AWS_GROUNDSTATION_API AuditResults GetAuditResultsForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForAuditResults(AuditResults value);
}  // namespace AuditResultsMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
