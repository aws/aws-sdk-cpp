/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Account
{
namespace AccountEndpoint
{
AWS_ACCOUNT_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace AccountEndpoint
} // namespace Account
} // namespace Aws
