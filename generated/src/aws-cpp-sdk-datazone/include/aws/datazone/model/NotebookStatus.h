/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotebookStatus { NOT_SET, ACTIVE, ARCHIVED };

namespace NotebookStatusMapper {
AWS_DATAZONE_API NotebookStatus GetNotebookStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotebookStatus(NotebookStatus value);
}  // namespace NotebookStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
