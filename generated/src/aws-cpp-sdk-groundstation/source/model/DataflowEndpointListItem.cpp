/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DataflowEndpointListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

DataflowEndpointListItem::DataflowEndpointListItem() : 
    m_dataflowEndpointGroupArnHasBeenSet(false),
    m_dataflowEndpointGroupIdHasBeenSet(false)
{
}

DataflowEndpointListItem::DataflowEndpointListItem(JsonView jsonValue) : 
    m_dataflowEndpointGroupArnHasBeenSet(false),
    m_dataflowEndpointGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

DataflowEndpointListItem& DataflowEndpointListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataflowEndpointGroupArn"))
  {
    m_dataflowEndpointGroupArn = jsonValue.GetString("dataflowEndpointGroupArn");

    m_dataflowEndpointGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataflowEndpointGroupId"))
  {
    m_dataflowEndpointGroupId = jsonValue.GetString("dataflowEndpointGroupId");

    m_dataflowEndpointGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DataflowEndpointListItem::Jsonize() const
{
  JsonValue payload;

  if(m_dataflowEndpointGroupArnHasBeenSet)
  {
   payload.WithString("dataflowEndpointGroupArn", m_dataflowEndpointGroupArn);

  }

  if(m_dataflowEndpointGroupIdHasBeenSet)
  {
   payload.WithString("dataflowEndpointGroupId", m_dataflowEndpointGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
