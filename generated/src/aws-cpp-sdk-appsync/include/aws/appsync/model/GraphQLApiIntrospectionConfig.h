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
  enum class GraphQLApiIntrospectionConfig
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace GraphQLApiIntrospectionConfigMapper
{
AWS_APPSYNC_API GraphQLApiIntrospectionConfig GetGraphQLApiIntrospectionConfigForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForGraphQLApiIntrospectionConfig(GraphQLApiIntrospectionConfig value);
} // namespace GraphQLApiIntrospectionConfigMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
