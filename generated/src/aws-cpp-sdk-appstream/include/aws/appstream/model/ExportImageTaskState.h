/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class ExportImageTaskState { NOT_SET, EXPORTING, COMPLETED, FAILED };

namespace ExportImageTaskStateMapper {
AWS_APPSTREAM_API ExportImageTaskState GetExportImageTaskStateForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForExportImageTaskState(ExportImageTaskState value);
}  // namespace ExportImageTaskStateMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
