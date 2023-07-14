/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class OperationStatus
  {
    NOT_SET,
    SUBMITTED,
    PENDING,
    SUCCESS,
    FAIL
  };

namespace OperationStatusMapper
{
AWS_SERVICEDISCOVERY_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
