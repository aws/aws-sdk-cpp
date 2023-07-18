/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ReservedNodeExchangeStatusType
  {
    NOT_SET,
    REQUESTED,
    PENDING,
    IN_PROGRESS,
    RETRYING,
    SUCCEEDED,
    FAILED
  };

namespace ReservedNodeExchangeStatusTypeMapper
{
AWS_REDSHIFT_API ReservedNodeExchangeStatusType GetReservedNodeExchangeStatusTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForReservedNodeExchangeStatusType(ReservedNodeExchangeStatusType value);
} // namespace ReservedNodeExchangeStatusTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
