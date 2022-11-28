/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ClusterServiceConnectDefaults.h>
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

ClusterServiceConnectDefaults::ClusterServiceConnectDefaults() : 
    m_namespaceHasBeenSet(false)
{
}

ClusterServiceConnectDefaults::ClusterServiceConnectDefaults(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterServiceConnectDefaults& ClusterServiceConnectDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterServiceConnectDefaults::Jsonize() const
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
