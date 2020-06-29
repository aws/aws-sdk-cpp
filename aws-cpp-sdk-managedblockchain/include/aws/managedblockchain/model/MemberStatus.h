/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class MemberStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATE_FAILED,
    UPDATING,
    DELETING,
    DELETED
  };

namespace MemberStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API MemberStatus GetMemberStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForMemberStatus(MemberStatus value);
} // namespace MemberStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
