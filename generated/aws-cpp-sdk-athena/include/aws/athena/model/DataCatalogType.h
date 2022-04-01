/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class DataCatalogType
  {
    NOT_SET,
    LAMBDA,
    GLUE,
    HIVE
  };

namespace DataCatalogTypeMapper
{
AWS_ATHENA_API DataCatalogType GetDataCatalogTypeForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForDataCatalogType(DataCatalogType value);
} // namespace DataCatalogTypeMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
