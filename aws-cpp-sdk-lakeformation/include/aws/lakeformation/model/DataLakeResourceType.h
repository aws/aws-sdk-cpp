/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{
  enum class DataLakeResourceType
  {
    NOT_SET,
    CATALOG,
    DATABASE,
    TABLE,
    DATA_LOCATION
  };

namespace DataLakeResourceTypeMapper
{
AWS_LAKEFORMATION_API DataLakeResourceType GetDataLakeResourceTypeForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForDataLakeResourceType(DataLakeResourceType value);
} // namespace DataLakeResourceTypeMapper
} // namespace Model
} // namespace LakeFormation
} // namespace Aws
