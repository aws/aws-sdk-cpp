/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/DocDB_EXPORTS.h>

namespace Aws {
namespace DocDB {
namespace Model {
enum class FailoverStatus { NOT_SET, pending, failing_over, cancelling };

namespace FailoverStatusMapper {
AWS_DOCDB_API FailoverStatus GetFailoverStatusForName(const Aws::String& name);

AWS_DOCDB_API Aws::String GetNameForFailoverStatus(FailoverStatus value);
}  // namespace FailoverStatusMapper
}  // namespace Model
}  // namespace DocDB
}  // namespace Aws
