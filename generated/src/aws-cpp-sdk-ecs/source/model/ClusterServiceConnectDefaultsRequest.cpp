/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ClusterServiceConnectDefaultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ClusterServiceConnectDefaultsRequest::ClusterServiceConnectDefaultsRequest() : 
    m_namespaceHasBeenSet(false)
{
}

ClusterServiceConnectDefaultsRequest::ClusterServiceConnectDefaultsRequest(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterServiceConnectDefaultsRequest& ClusterServiceConnectDefaultsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterServiceConnectDefaultsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
