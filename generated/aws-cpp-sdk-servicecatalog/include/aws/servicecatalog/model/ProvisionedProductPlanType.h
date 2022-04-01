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
  enum class ProvisionedProductPlanType
  {
    NOT_SET,
    CLOUDFORMATION
  };

namespace ProvisionedProductPlanTypeMapper
{
AWS_SERVICECATALOG_API ProvisionedProductPlanType GetProvisionedProductPlanTypeForName(const Aws::String& name);

AWS_SERVICECATALOG_API Aws::String GetNameForProvisionedProductPlanType(ProvisionedProductPlanType value);
} // namespace ProvisionedProductPlanTypeMapper
} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
