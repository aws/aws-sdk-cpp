/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/KubernetesScalingResource.h>
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

KubernetesScalingResource::KubernetesScalingResource(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesScalingResource& KubernetesScalingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hpaName"))
  {
    m_hpaName = jsonValue.GetString("hpaName");
    m_hpaNameHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesScalingResource::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_hpaNameHasBeenSet)
  {
   payload.WithString("hpaName", m_hpaName);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
