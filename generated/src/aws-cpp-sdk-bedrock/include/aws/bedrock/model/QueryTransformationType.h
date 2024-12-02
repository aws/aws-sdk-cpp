/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class QueryTransformationType
  {
    NOT_SET,
    QUERY_DECOMPOSITION
  };

namespace QueryTransformationTypeMapper
{
AWS_BEDROCK_API QueryTransformationType GetQueryTransformationTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForQueryTransformationType(QueryTransformationType value);
} // namespace QueryTransformationTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
