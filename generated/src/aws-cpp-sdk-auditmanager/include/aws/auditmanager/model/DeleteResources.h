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
  enum class DeleteResources
  {
    NOT_SET,
    ALL,
    DEFAULT
  };

namespace DeleteResourcesMapper
{
AWS_AUDITMANAGER_API DeleteResources GetDeleteResourcesForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForDeleteResources(DeleteResources value);
} // namespace DeleteResourcesMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
