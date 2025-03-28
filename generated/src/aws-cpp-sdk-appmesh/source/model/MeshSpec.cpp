﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/MeshSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

MeshSpec::MeshSpec(JsonView jsonValue)
{
  *this = jsonValue;
}

MeshSpec& MeshSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("egressFilter"))
  {
    m_egressFilter = jsonValue.GetObject("egressFilter");
    m_egressFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceDiscovery"))
  {
    m_serviceDiscovery = jsonValue.GetObject("serviceDiscovery");
    m_serviceDiscoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue MeshSpec::Jsonize() const
{
  JsonValue payload;

  if(m_egressFilterHasBeenSet)
  {
   payload.WithObject("egressFilter", m_egressFilter.Jsonize());

  }

  if(m_serviceDiscoveryHasBeenSet)
  {
   payload.WithObject("serviceDiscovery", m_serviceDiscovery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
