/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{
  enum class ExportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    READY,
    FAILED
  };

namespace ExportStatusMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForExportStatus(ExportStatus value);
} // namespace ExportStatusMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
