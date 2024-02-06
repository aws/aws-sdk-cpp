/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class PropertyValueType
  {
    NOT_SET,
    PLAIN_TEXT,
    STRINGIFIED_JSON
  };

namespace PropertyValueTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API PropertyValueType GetPropertyValueTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForPropertyValueType(PropertyValueType value);
} // namespace PropertyValueTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
