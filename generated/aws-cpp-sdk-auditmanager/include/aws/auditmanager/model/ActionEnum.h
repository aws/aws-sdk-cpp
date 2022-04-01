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
  enum class ActionEnum
  {
    NOT_SET,
    CREATE,
    UPDATE_METADATA,
    ACTIVE,
    INACTIVE,
    DELETE_,
    UNDER_REVIEW,
    REVIEWED,
    IMPORT_EVIDENCE
  };

namespace ActionEnumMapper
{
AWS_AUDITMANAGER_API ActionEnum GetActionEnumForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForActionEnum(ActionEnum value);
} // namespace ActionEnumMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
