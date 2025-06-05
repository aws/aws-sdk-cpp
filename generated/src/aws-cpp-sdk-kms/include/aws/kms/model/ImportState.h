/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class ImportState
  {
    NOT_SET,
    IMPORTED,
    PENDING_IMPORT
  };

namespace ImportStateMapper
{
AWS_KMS_API ImportState GetImportStateForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForImportState(ImportState value);
} // namespace ImportStateMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
