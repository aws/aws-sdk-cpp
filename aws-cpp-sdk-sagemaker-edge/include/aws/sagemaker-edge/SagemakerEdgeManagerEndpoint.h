/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace SagemakerEdgeManager
{
namespace SagemakerEdgeManagerEndpoint
{
AWS_SAGEMAKEREDGEMANAGER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace SagemakerEdgeManagerEndpoint
} // namespace SagemakerEdgeManager
} // namespace Aws
