/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace DataExchange
{
namespace DataExchangeEndpoint
{
AWS_DATAEXCHANGE_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace DataExchangeEndpoint
} // namespace DataExchange
} // namespace Aws
