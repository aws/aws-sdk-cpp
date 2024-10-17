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
  enum class GrantDistributionScope
  {
    NOT_SET,
    AWS_ORGANIZATION,
    NONE
  };

namespace GrantDistributionScopeMapper
{
AWS_DATAEXCHANGE_API GrantDistributionScope GetGrantDistributionScopeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForGrantDistributionScope(GrantDistributionScope value);
} // namespace GrantDistributionScopeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
