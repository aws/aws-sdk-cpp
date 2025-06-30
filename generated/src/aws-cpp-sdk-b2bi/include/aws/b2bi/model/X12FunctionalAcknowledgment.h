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
  enum class X12FunctionalAcknowledgment
  {
    NOT_SET,
    DO_NOT_GENERATE,
    GENERATE_ALL_SEGMENTS,
    GENERATE_WITHOUT_TRANSACTION_SET_RESPONSE_LOOP
  };

namespace X12FunctionalAcknowledgmentMapper
{
AWS_B2BI_API X12FunctionalAcknowledgment GetX12FunctionalAcknowledgmentForName(const Aws::String& name);

AWS_B2BI_API Aws::String GetNameForX12FunctionalAcknowledgment(X12FunctionalAcknowledgment value);
} // namespace X12FunctionalAcknowledgmentMapper
} // namespace Model
} // namespace B2BI
} // namespace Aws
