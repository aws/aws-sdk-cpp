/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace B2BI
{
namespace Model
{
  enum class X12TransactionSet
  {
    NOT_SET,
    X12_110,
    X12_180,
    X12_204,
    X12_210,
    X12_214,
    X12_215,
    X12_310,
    X12_315,
    X12_322,
    X12_404,
    X12_410,
    X12_820,
    X12_824,
    X12_830,
    X12_846,
    X12_850,
    X12_852,
    X12_855,
    X12_856,
    X12_860,
    X12_861,
    X12_864,
    X12_940,
    X12_990,
    X12_997
  };

namespace X12TransactionSetMapper
{
AWS_B2BI_API X12TransactionSet GetX12TransactionSetForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12TransactionSet(X12TransactionSet value);
} // namespace X12TransactionSetMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
