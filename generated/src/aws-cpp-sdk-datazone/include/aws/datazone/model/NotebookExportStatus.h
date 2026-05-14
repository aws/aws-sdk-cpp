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
enum class NotebookExportStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace NotebookExportStatusMapper {
AWS_DATAZONE_API NotebookExportStatus GetNotebookExportStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotebookExportStatus(NotebookExportStatus value);
}  // namespace NotebookExportStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
