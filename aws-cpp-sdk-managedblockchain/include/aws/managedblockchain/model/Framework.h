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
  enum class Framework
  {
    NOT_SET,
    HYPERLEDGER_FABRIC
  };

namespace FrameworkMapper
{
AWS_MANAGEDBLOCKCHAIN_API Framework GetFrameworkForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForFramework(Framework value);
} // namespace FrameworkMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
