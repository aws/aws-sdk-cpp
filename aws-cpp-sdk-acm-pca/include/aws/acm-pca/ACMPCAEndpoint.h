/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ACMPCA
{
namespace ACMPCAEndpoint
{
AWS_ACMPCA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ACMPCAEndpoint
} // namespace ACMPCA
} // namespace Aws
