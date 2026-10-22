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
enum class IssueStatus { NOT_SET, CREATED, IN_PROGRESS, COMPLETED, FAILED };

namespace IssueStatusMapper {
AWS_CONTINUUM_API IssueStatus GetIssueStatusForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForIssueStatus(IssueStatus value);
}  // namespace IssueStatusMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
