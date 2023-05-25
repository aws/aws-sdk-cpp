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
  enum class SourceSetUpOption
  {
    NOT_SET,
    System_Controls_Mapping,
    Procedural_Controls_Mapping
  };

namespace SourceSetUpOptionMapper
{
AWS_AUDITMANAGER_API SourceSetUpOption GetSourceSetUpOptionForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForSourceSetUpOption(SourceSetUpOption value);
} // namespace SourceSetUpOptionMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
