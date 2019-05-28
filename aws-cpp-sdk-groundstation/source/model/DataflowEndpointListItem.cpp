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
