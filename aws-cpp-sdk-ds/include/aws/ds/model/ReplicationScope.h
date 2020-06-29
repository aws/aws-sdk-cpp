/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class ReplicationScope
  {
    NOT_SET,
    Domain
  };

namespace ReplicationScopeMapper
{
AWS_DIRECTORYSERVICE_API ReplicationScope GetReplicationScopeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForReplicationScope(ReplicationScope value);
} // namespace ReplicationScopeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
