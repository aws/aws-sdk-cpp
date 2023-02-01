/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryStagePlanNode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryStagePlanNode::QueryStagePlanNode() : 
    m_nameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_remoteSourcesHasBeenSet(false)
{
}

QueryStagePlanNode::QueryStagePlanNode(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_remoteSourcesHasBeenSet(false)
{
  *this = jsonValue;
}

QueryStagePlanNode& QueryStagePlanNode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Children"))
  {
    Aws::Utils::Array<JsonView> childrenJsonList = jsonValue.GetArray("Children");
    for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
    {
      m_children.push_back(childrenJsonList[childrenIndex].AsObject());
    }
    m_childrenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoteSources"))
  {
    Aws::Utils::Array<JsonView> remoteSourcesJsonList = jsonValue.GetArray("RemoteSources");
    for(unsigned remoteSourcesIndex = 0; remoteSourcesIndex < remoteSourcesJsonList.GetLength(); ++remoteSourcesIndex)
    {
      m_remoteSources.push_back(remoteSourcesJsonList[remoteSourcesIndex].AsString());
    }
    m_remoteSourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryStagePlanNode::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  if(m_childrenHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childrenJsonList(m_children.size());
   for(unsigned childrenIndex = 0; childrenIndex < childrenJsonList.GetLength(); ++childrenIndex)
   {
     childrenJsonList[childrenIndex].AsObject(m_children[childrenIndex].Jsonize());
   }
   payload.WithArray("Children", std::move(childrenJsonList));

  }

  if(m_remoteSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> remoteSourcesJsonList(m_remoteSources.size());
   for(unsigned remoteSourcesIndex = 0; remoteSourcesIndex < remoteSourcesJsonList.GetLength(); ++remoteSourcesIndex)
   {
     remoteSourcesJsonList[remoteSourcesIndex].AsString(m_remoteSources[remoteSourcesIndex]);
   }
   payload.WithArray("RemoteSources", std::move(remoteSourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
