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
  enum class ProposalStatus
  {
    NOT_SET,
    IN_PROGRESS,
    APPROVED,
    REJECTED,
    EXPIRED,
    ACTION_FAILED
  };

namespace ProposalStatusMapper
{
AWS_MANAGEDBLOCKCHAIN_API ProposalStatus GetProposalStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForProposalStatus(ProposalStatus value);
} // namespace ProposalStatusMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
