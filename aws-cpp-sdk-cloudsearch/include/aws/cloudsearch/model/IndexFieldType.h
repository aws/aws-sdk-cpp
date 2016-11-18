﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
