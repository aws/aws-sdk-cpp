/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

FlowAssociationSummary::FlowAssociationSummary() : 
    m_resourceIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_resourceType(ListFlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

FlowAssociationSummary::FlowAssociationSummary(JsonView jsonValue) : 
    m_resourceIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_resourceType(ListFlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FlowAssociationSummary& FlowAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowId"))
  {
    m_flowId = jsonValue.GetString("FlowId");

    m_flowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ListFlowAssociationResourceTypeMapper::GetListFlowAssociationResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_flowIdHasBeenSet)
  {
   payload.WithString("FlowId", m_flowId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ListFlowAssociationResourceTypeMapper::GetNameForListFlowAssociationResourceType(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
