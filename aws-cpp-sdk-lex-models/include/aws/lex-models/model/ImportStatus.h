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
  enum class ImportStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    FAILED
  };

namespace ImportStatusMapper
{
AWS_LEXMODELBUILDINGSERVICE_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_LEXMODELBUILDINGSERVICE_API Aws::String GetNameForImportStatus(ImportStatus value);
} // namespace ImportStatusMapper
} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
