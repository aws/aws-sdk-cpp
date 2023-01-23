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
  enum class TableStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    UPDATING,
    DELETING,
    DELETED,
    RESTORING,
    INACCESSIBLE_ENCRYPTION_CREDENTIALS
  };

namespace TableStatusMapper
{
AWS_KEYSPACES_API TableStatus GetTableStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForTableStatus(TableStatus value);
} // namespace TableStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
