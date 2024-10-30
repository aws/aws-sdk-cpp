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
  enum class TypeStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    DELETING,
    RESTORING
  };

namespace TypeStatusMapper
{
AWS_KEYSPACES_API TypeStatus GetTypeStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForTypeStatus(TypeStatus value);
} // namespace TypeStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
