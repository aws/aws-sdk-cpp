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
enum class IssueStatusReason { NOT_SET, INTERNAL_ERROR, REMEDIATION_FAILED };

namespace IssueStatusReasonMapper {
AWS_CONTINUUM_API IssueStatusReason GetIssueStatusReasonForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssueStatusReason(IssueStatusReason value);
}  // namespace IssueStatusReasonMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
