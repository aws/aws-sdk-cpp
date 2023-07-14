/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AuditFindingSeverity
  {
    NOT_SET,
    CRITICAL,
    HIGH,
    MEDIUM,
    LOW
  };

namespace AuditFindingSeverityMapper
{
AWS_IOT_API AuditFindingSeverity GetAuditFindingSeverityForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditFindingSeverity(AuditFindingSeverity value);
} // namespace AuditFindingSeverityMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
