/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ImportLensStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    ERROR_
  };

namespace ImportLensStatusMapper
{
AWS_WELLARCHITECTED_API ImportLensStatus GetImportLensStatusForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForImportLensStatus(ImportLensStatus value);
} // namespace ImportLensStatusMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
