/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class QueryType
  {
    NOT_SET,
    Category,
    BusinessChain
  };

namespace QueryTypeMapper
{
AWS_GEOPLACES_API QueryType GetQueryTypeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForQueryType(QueryType value);
} // namespace QueryTypeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
