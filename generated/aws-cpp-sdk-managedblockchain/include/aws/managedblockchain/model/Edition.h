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
  enum class Edition
  {
    NOT_SET,
    STARTER,
    STANDARD
  };

namespace EditionMapper
{
AWS_MANAGEDBLOCKCHAIN_API Edition GetEditionForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForEdition(Edition value);
} // namespace EditionMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
