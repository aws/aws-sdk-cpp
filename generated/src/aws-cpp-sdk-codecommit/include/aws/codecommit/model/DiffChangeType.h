/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CodeCommit {
namespace Model {
enum class DiffChangeType { NOT_SET, CONTEXT, ADD, DELETE_ };

namespace DiffChangeTypeMapper {
AWS_CODECOMMIT_API DiffChangeType GetDiffChangeTypeForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForDiffChangeType(DiffChangeType value);
}  // namespace DiffChangeTypeMapper
}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
