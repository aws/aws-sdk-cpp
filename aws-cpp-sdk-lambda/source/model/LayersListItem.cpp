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

#include <aws/lambda/model/LayersListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

LayersListItem::LayersListItem() : 
    m_layerNameHasBeenSet(false),
    m_layerArnHasBeenSet(false),
    m_latestMatchingVersionHasBeenSet(false)
{
}

LayersListItem::LayersListItem(JsonView jsonValue) : 
    m_layerNameHasBeenSet(false),
    m_layerArnHasBeenSet(false),
    m_latestMatchingVersionHasBeenSet(false)
{
  *this = jsonValue;
}

LayersListItem& LayersListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LayerName"))
  {
    m_layerName = jsonValue.GetString("LayerName");

    m_layerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LayerArn"))
  {
    m_layerArn = jsonValue.GetString("LayerArn");

    m_layerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestMatchingVersion"))
  {
    m_latestMatchingVersion = jsonValue.GetObject("LatestMatchingVersion");

    m_latestMatchingVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue LayersListItem::Jsonize() const
{
  JsonValue payload;

  if(m_layerNameHasBeenSet)
  {
   payload.WithString("LayerName", m_layerName);

  }

  if(m_layerArnHasBeenSet)
  {
   payload.WithString("LayerArn", m_layerArn);

  }

  if(m_latestMatchingVersionHasBeenSet)
  {
   payload.WithObject("LatestMatchingVersion", m_latestMatchingVersion.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
