/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class GraphQLApiType
  {
    NOT_SET,
    GRAPHQL,
    MERGED
  };

namespace GraphQLApiTypeMapper
{
AWS_APPSYNC_API GraphQLApiType GetGraphQLApiTypeForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForGraphQLApiType(GraphQLApiType value);
} // namespace GraphQLApiTypeMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
