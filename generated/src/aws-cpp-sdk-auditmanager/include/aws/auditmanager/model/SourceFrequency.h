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
  enum class SourceFrequency
  {
    NOT_SET,
    DAILY,
    WEEKLY,
    MONTHLY
  };

namespace SourceFrequencyMapper
{
AWS_AUDITMANAGER_API SourceFrequency GetSourceFrequencyForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForSourceFrequency(SourceFrequency value);
} // namespace SourceFrequencyMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
