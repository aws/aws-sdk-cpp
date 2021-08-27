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
  enum class OperationType
  {
    NOT_SET,
    CREATE_NAMESPACE,
    DELETE_NAMESPACE,
    UPDATE_SERVICE,
    REGISTER_INSTANCE,
    DEREGISTER_INSTANCE
  };

namespace OperationTypeMapper
{
AWS_SERVICEDISCOVERY_API OperationType GetOperationTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForOperationType(OperationType value);
} // namespace OperationTypeMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
