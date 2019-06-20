/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
