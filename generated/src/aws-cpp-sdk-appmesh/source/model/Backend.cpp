/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/Backend.h>
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

Backend::Backend() : 
    m_virtualServiceHasBeenSet(false)
{
}

Backend::Backend(JsonView jsonValue) : 
    m_virtualServiceHasBeenSet(false)
{
  *this = jsonValue;
}

Backend& Backend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("virtualService"))
  {
    m_virtualService = jsonValue.GetObject("virtualService");

    m_virtualServiceHasBeenSet = true;
  }

  return *this;
}

JsonValue Backend::Jsonize() const
{
  JsonValue payload;

  if(m_virtualServiceHasBeenSet)
  {
   payload.WithObject("virtualService", m_virtualService.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
