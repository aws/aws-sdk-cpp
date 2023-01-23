/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class CatalogType
  {
    NOT_SET,
    GLUE
  };

namespace CatalogTypeMapper
{
AWS_APPFLOW_API CatalogType GetCatalogTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForCatalogType(CatalogType value);
} // namespace CatalogTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
