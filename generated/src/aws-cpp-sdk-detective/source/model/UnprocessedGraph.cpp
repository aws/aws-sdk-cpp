/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/UnprocessedGraph.h>
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

UnprocessedGraph::UnprocessedGraph() : 
    m_graphArnHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

UnprocessedGraph::UnprocessedGraph(JsonView jsonValue) : 
    m_graphArnHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedGraph& UnprocessedGraph::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

    m_graphArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedGraph::Jsonize() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
