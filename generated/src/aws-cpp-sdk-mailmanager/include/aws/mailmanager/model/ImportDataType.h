/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class ImportDataType
  {
    NOT_SET,
    CSV,
    JSON
  };

namespace ImportDataTypeMapper
{
AWS_MAILMANAGER_API ImportDataType GetImportDataTypeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForImportDataType(ImportDataType value);
} // namespace ImportDataTypeMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
