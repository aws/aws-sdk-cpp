/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace KMS
{
namespace KMSEndpoint
{
AWS_KMS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KMSEndpoint
} // namespace KMS
} // namespace Aws
