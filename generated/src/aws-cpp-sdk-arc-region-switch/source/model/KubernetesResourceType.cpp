/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/KubernetesResourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

KubernetesResourceType::KubernetesResourceType(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesResourceType& KubernetesResourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiVersion"))
  {
    m_apiVersion = jsonValue.GetString("apiVersion");
    m_apiVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kind"))
  {
    m_kind = jsonValue.GetString("kind");
    m_kindHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesResourceType::Jsonize() const
{
  JsonValue payload;

  if(m_apiVersionHasBeenSet)
  {
   payload.WithString("apiVersion", m_apiVersion);

  }

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", m_kind);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
