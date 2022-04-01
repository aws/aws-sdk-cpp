/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{
  enum class CmkType
  {
    NOT_SET,
    CUSTOMER_MANAGED_KMS_KEY,
    AWS_OWNED_KMS_KEY
  };

namespace CmkTypeMapper
{
AWS_HEALTHLAKE_API CmkType GetCmkTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForCmkType(CmkType value);
} // namespace CmkTypeMapper
} // namespace Model
} // namespace HealthLake
} // namespace Aws
