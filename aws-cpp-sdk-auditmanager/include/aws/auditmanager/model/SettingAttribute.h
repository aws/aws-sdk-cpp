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
  enum class SettingAttribute
  {
    NOT_SET,
    ALL,
    IS_AWS_ORG_ENABLED,
    SNS_TOPIC,
    DEFAULT_ASSESSMENT_REPORTS_DESTINATION,
    DEFAULT_PROCESS_OWNERS,
    EVIDENCE_FINDER_ENABLEMENT
  };

namespace SettingAttributeMapper
{
AWS_AUDITMANAGER_API SettingAttribute GetSettingAttributeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForSettingAttribute(SettingAttribute value);
} // namespace SettingAttributeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
