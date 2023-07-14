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
  enum class ProductType
  {
    NOT_SET,
    CLOUD_FORMATION_TEMPLATE,
    MARKETPLACE
  };

namespace ProductTypeMapper
{
AWS_SERVICECATALOG_API ProductType GetProductTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProductType(ProductType value);
} // namespace ProductTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
