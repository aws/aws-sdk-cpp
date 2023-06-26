/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class ImportStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Deleting
  };

namespace ImportStatusMapper
{
AWS_LEXMODELSV2_API ImportStatus GetImportStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForImportStatus(ImportStatus value);
} // namespace ImportStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
