/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{
  enum class ServiceActionAssociationErrorCode
  {
    NOT_SET,
    DUPLICATE_RESOURCE,
    INTERNAL_FAILURE,
    LIMIT_EXCEEDED,
    RESOURCE_NOT_FOUND,
    THROTTLING
  };

namespace ServiceActionAssociationErrorCodeMapper
{
AWS_SERVICECATALOG_API ServiceActionAssociationErrorCode GetServiceActionAssociationErrorCodeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForServiceActionAssociationErrorCode(ServiceActionAssociationErrorCode value);
} // namespace ServiceActionAssociationErrorCodeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
