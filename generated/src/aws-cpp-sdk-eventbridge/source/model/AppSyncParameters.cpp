/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/AppSyncParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

AppSyncParameters::AppSyncParameters() : 
    m_graphQLOperationHasBeenSet(false)
{
}

AppSyncParameters::AppSyncParameters(JsonView jsonValue) : 
    m_graphQLOperationHasBeenSet(false)
{
  *this = jsonValue;
}

AppSyncParameters& AppSyncParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GraphQLOperation"))
  {
    m_graphQLOperation = jsonValue.GetString("GraphQLOperation");

    m_graphQLOperationHasBeenSet = true;
  }

  return *this;
}

JsonValue AppSyncParameters::Jsonize() const
{
  JsonValue payload;

  if(m_graphQLOperationHasBeenSet)
  {
   payload.WithString("GraphQLOperation", m_graphQLOperation);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
