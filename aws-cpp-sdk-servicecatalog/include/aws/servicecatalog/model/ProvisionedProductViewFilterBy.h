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
  enum class ProvisionedProductViewFilterBy
  {
    NOT_SET,
    SearchQuery
  };

namespace ProvisionedProductViewFilterByMapper
{
AWS_SERVICECATALOG_API ProvisionedProductViewFilterBy GetProvisionedProductViewFilterByForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisionedProductViewFilterBy(ProvisionedProductViewFilterBy value);
} // namespace ProvisionedProductViewFilterByMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
