/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class IndexFieldType
  {
    NOT_SET,
    int_,
    double_,
    literal,
    text,
    date,
    latlon,
    int_array,
    double_array,
    literal_array,
    text_array,
    date_array
  };

namespace IndexFieldTypeMapper
{
AWS_CLOUDSEARCH_API IndexFieldType GetIndexFieldTypeForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForIndexFieldType(IndexFieldType value);
} // namespace IndexFieldTypeMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
