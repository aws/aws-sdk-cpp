/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class AcceptanceStateFilterValue
  {
    NOT_SET,
    PENDING_RECEIVER_ACCEPTANCE,
    ACCEPTED
  };

namespace AcceptanceStateFilterValueMapper
{
AWS_DATAEXCHANGE_API AcceptanceStateFilterValue GetAcceptanceStateFilterValueForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForAcceptanceStateFilterValue(AcceptanceStateFilterValue value);
} // namespace AcceptanceStateFilterValueMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
