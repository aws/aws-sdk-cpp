/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    AZ,
    INSTANCE_TYPE,
    LINKED_ACCOUNT,
    OPERATION,
    PURCHASE_TYPE,
    REGION,
    SERVICE,
    USAGE_TYPE,
    USAGE_TYPE_GROUP,
    RECORD_TYPE,
    OPERATING_SYSTEM,
    TENANCY,
    SCOPE,
    PLATFORM,
    SUBSCRIPTION_ID,
    LEGAL_ENTITY_NAME,
    DEPLOYMENT_OPTION,
    DATABASE_ENGINE,
    CACHE_ENGINE,
    INSTANCE_TYPE_FAMILY,
    BILLING_ENTITY,
    RESERVATION_ID
  };

namespace DimensionMapper
{
AWS_COSTEXPLORER_API Dimension GetDimensionForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
