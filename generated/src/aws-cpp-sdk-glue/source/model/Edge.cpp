/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Edge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Edge::Edge() : 
    m_sourceIdHasBeenSet(false),
    m_destinationIdHasBeenSet(false)
{
}

Edge::Edge(JsonView jsonValue) : 
    m_sourceIdHasBeenSet(false),
    m_destinationIdHasBeenSet(false)
{
  *this = jsonValue;
}

Edge& Edge::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationId"))
  {
    m_destinationId = jsonValue.GetString("DestinationId");

    m_destinationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Edge::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_destinationIdHasBeenSet)
  {
   payload.WithString("DestinationId", m_destinationId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
