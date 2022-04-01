﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Node.h>
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

Node::Node() : 
    m_type(NodeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_triggerDetailsHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_crawlerDetailsHasBeenSet(false)
{
}

Node::Node(JsonView jsonValue) : 
    m_type(NodeType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uniqueIdHasBeenSet(false),
    m_triggerDetailsHasBeenSet(false),
    m_jobDetailsHasBeenSet(false),
    m_crawlerDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

Node& Node::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = NodeTypeMapper::GetNodeTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UniqueId"))
  {
    m_uniqueId = jsonValue.GetString("UniqueId");

    m_uniqueIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerDetails"))
  {
    m_triggerDetails = jsonValue.GetObject("TriggerDetails");

    m_triggerDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobDetails"))
  {
    m_jobDetails = jsonValue.GetObject("JobDetails");

    m_jobDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlerDetails"))
  {
    m_crawlerDetails = jsonValue.GetObject("CrawlerDetails");

    m_crawlerDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue Node::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NodeTypeMapper::GetNameForNodeType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_uniqueIdHasBeenSet)
  {
   payload.WithString("UniqueId", m_uniqueId);

  }

  if(m_triggerDetailsHasBeenSet)
  {
   payload.WithObject("TriggerDetails", m_triggerDetails.Jsonize());

  }

  if(m_jobDetailsHasBeenSet)
  {
   payload.WithObject("JobDetails", m_jobDetails.Jsonize());

  }

  if(m_crawlerDetailsHasBeenSet)
  {
   payload.WithObject("CrawlerDetails", m_crawlerDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
