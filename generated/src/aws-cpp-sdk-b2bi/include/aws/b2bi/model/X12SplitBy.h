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
  enum class X12SplitBy
  {
    NOT_SET,
    NONE,
    TRANSACTION
  };

namespace X12SplitByMapper
{
AWS_B2BI_API X12SplitBy GetX12SplitByForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12SplitBy(X12SplitBy value);
} // namespace X12SplitByMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
