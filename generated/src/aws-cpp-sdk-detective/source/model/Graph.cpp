/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/Graph.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

Graph::Graph() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

Graph::Graph(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Graph& Graph::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Graph::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
