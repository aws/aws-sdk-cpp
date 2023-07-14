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
  enum class VoteValue
  {
    NOT_SET,
    YES,
    NO
  };

namespace VoteValueMapper
{
AWS_MANAGEDBLOCKCHAIN_API VoteValue GetVoteValueForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForVoteValue(VoteValue value);
} // namespace VoteValueMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
