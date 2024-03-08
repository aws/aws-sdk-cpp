/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class AuditEventType
  {
    NOT_SET,
    Case_Created,
    Case_Updated,
    RelatedItem_Created
  };

namespace AuditEventTypeMapper
{
AWS_CONNECTCASES_API AuditEventType GetAuditEventTypeForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForAuditEventType(AuditEventType value);
} // namespace AuditEventTypeMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
