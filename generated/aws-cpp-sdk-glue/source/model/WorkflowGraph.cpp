﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/WorkflowGraph.h>
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

WorkflowGraph::WorkflowGraph() : 
    m_nodesHasBeenSet(false),
    m_edgesHasBeenSet(false)
{
}

WorkflowGraph::WorkflowGraph(JsonView jsonValue) : 
    m_nodesHasBeenSet(false),
    m_edgesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowGraph& WorkflowGraph::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Nodes"))
  {
    Array<JsonView> nodesJsonList = jsonValue.GetArray("Nodes");
    for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
    {
      m_nodes.push_back(nodesJsonList[nodesIndex].AsObject());
    }
    m_nodesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Edges"))
  {
    Array<JsonView> edgesJsonList = jsonValue.GetArray("Edges");
    for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
    {
      m_edges.push_back(edgesJsonList[edgesIndex].AsObject());
    }
    m_edgesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowGraph::Jsonize() const
{
  JsonValue payload;

  if(m_nodesHasBeenSet)
  {
   Array<JsonValue> nodesJsonList(m_nodes.size());
   for(unsigned nodesIndex = 0; nodesIndex < nodesJsonList.GetLength(); ++nodesIndex)
   {
     nodesJsonList[nodesIndex].AsObject(m_nodes[nodesIndex].Jsonize());
   }
   payload.WithArray("Nodes", std::move(nodesJsonList));

  }

  if(m_edgesHasBeenSet)
  {
   Array<JsonValue> edgesJsonList(m_edges.size());
   for(unsigned edgesIndex = 0; edgesIndex < edgesJsonList.GetLength(); ++edgesIndex)
   {
     edgesJsonList[edgesIndex].AsObject(m_edges[edgesIndex].Jsonize());
   }
   payload.WithArray("Edges", std::move(edgesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
