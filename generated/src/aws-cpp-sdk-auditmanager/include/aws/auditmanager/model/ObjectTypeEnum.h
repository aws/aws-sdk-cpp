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
  enum class ObjectTypeEnum
  {
    NOT_SET,
    ASSESSMENT,
    CONTROL_SET,
    CONTROL,
    DELEGATION,
    ASSESSMENT_REPORT
  };

namespace ObjectTypeEnumMapper
{
AWS_AUDITMANAGER_API ObjectTypeEnum GetObjectTypeEnumForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForObjectTypeEnum(ObjectTypeEnum value);
} // namespace ObjectTypeEnumMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
