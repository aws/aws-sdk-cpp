/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/Layer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

Layer::Layer() : 
    m_layerDigestHasBeenSet(false),
    m_layerAvailability(LayerAvailability::NOT_SET),
    m_layerAvailabilityHasBeenSet(false),
    m_layerSize(0),
    m_layerSizeHasBeenSet(false)
{
}

Layer::Layer(const JsonValue& jsonValue) : 
    m_layerDigestHasBeenSet(false),
    m_layerAvailability(LayerAvailability::NOT_SET),
    m_layerAvailabilityHasBeenSet(false),
    m_layerSize(0),
    m_layerSizeHasBeenSet(false)
{
  *this = jsonValue;
}

Layer& Layer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("layerDigest"))
  {
    m_layerDigest = jsonValue.GetString("layerDigest");

    m_layerDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layerAvailability"))
  {
    m_layerAvailability = LayerAvailabilityMapper::GetLayerAvailabilityForName(jsonValue.GetString("layerAvailability"));

    m_layerAvailabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layerSize"))
  {
    m_layerSize = jsonValue.GetInt64("layerSize");

    m_layerSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue Layer::Jsonize() const
{
  JsonValue payload;

  if(m_layerDigestHasBeenSet)
  {
   payload.WithString("layerDigest", m_layerDigest);

  }

  if(m_layerAvailabilityHasBeenSet)
  {
   payload.WithString("layerAvailability", LayerAvailabilityMapper::GetNameForLayerAvailability(m_layerAvailability));
  }

  if(m_layerSizeHasBeenSet)
  {
   payload.WithInt64("layerSize", m_layerSize);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws