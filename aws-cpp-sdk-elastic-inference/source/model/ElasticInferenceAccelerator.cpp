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

#include <aws/elastic-inference/model/ElasticInferenceAccelerator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

ElasticInferenceAccelerator::ElasticInferenceAccelerator() : 
    m_acceleratorHealthHasBeenSet(false),
    m_acceleratorTypeHasBeenSet(false),
    m_acceleratorIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_attachedResourceHasBeenSet(false)
{
}

ElasticInferenceAccelerator::ElasticInferenceAccelerator(JsonView jsonValue) : 
    m_acceleratorHealthHasBeenSet(false),
    m_acceleratorTypeHasBeenSet(false),
    m_acceleratorIdHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_attachedResourceHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticInferenceAccelerator& ElasticInferenceAccelerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceleratorHealth"))
  {
    m_acceleratorHealth = jsonValue.GetObject("acceleratorHealth");

    m_acceleratorHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceleratorType"))
  {
    m_acceleratorType = jsonValue.GetString("acceleratorType");

    m_acceleratorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("acceleratorId"))
  {
    m_acceleratorId = jsonValue.GetString("acceleratorId");

    m_acceleratorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachedResource"))
  {
    m_attachedResource = jsonValue.GetString("attachedResource");

    m_attachedResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticInferenceAccelerator::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorHealthHasBeenSet)
  {
   payload.WithObject("acceleratorHealth", m_acceleratorHealth.Jsonize());

  }

  if(m_acceleratorTypeHasBeenSet)
  {
   payload.WithString("acceleratorType", m_acceleratorType);

  }

  if(m_acceleratorIdHasBeenSet)
  {
   payload.WithString("acceleratorId", m_acceleratorId);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_attachedResourceHasBeenSet)
  {
   payload.WithString("attachedResource", m_attachedResource);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
