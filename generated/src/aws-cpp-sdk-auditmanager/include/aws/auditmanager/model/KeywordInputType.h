/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AuditManager
{
namespace Model
{
  enum class KeywordInputType
  {
    NOT_SET,
    SELECT_FROM_LIST,
    UPLOAD_FILE,
    INPUT_TEXT
  };

namespace KeywordInputTypeMapper
{
AWS_AUDITMANAGER_API KeywordInputType GetKeywordInputTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForKeywordInputType(KeywordInputType value);
} // namespace KeywordInputTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
