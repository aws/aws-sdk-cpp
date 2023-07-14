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
  enum class ThresholdComparator
  {
    NOT_SET,
    GREATER_THAN,
    GREATER_THAN_OR_EQUAL_TO
  };

namespace ThresholdComparatorMapper
{
AWS_MANAGEDBLOCKCHAIN_API ThresholdComparator GetThresholdComparatorForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForThresholdComparator(ThresholdComparator value);
} // namespace ThresholdComparatorMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
