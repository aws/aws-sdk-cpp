/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class KeyspaceStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    UPDATING,
    DELETING
  };

namespace KeyspaceStatusMapper
{
AWS_KEYSPACES_API KeyspaceStatus GetKeyspaceStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForKeyspaceStatus(KeyspaceStatus value);
} // namespace KeyspaceStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
