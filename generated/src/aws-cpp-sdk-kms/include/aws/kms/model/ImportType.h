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
  enum class ImportType
  {
    NOT_SET,
    NEW_KEY_MATERIAL,
    EXISTING_KEY_MATERIAL
  };

namespace ImportTypeMapper
{
AWS_KMS_API ImportType GetImportTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForImportType(ImportType value);
} // namespace ImportTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
