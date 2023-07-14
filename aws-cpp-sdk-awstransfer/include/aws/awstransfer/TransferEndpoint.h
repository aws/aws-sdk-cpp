/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Transfer
{
namespace TransferEndpoint
{
AWS_TRANSFER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace TransferEndpoint
} // namespace Transfer
} // namespace Aws
