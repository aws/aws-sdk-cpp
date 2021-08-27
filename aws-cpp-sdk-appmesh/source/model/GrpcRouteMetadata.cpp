/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/GrpcRouteMetadata.h>
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

GrpcRouteMetadata::GrpcRouteMetadata() : 
    m_invert(false),
    m_invertHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

GrpcRouteMetadata::GrpcRouteMetadata(JsonView jsonValue) : 
    m_invert(false),
    m_invertHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRouteMetadata& GrpcRouteMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invert"))
  {
    m_invert = jsonValue.GetBool("invert");

    m_invertHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcRouteMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_invertHasBeenSet)
  {
   payload.WithBool("invert", m_invert);

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
