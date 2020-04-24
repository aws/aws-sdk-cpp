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

#include <aws/elastic-inference/model/AcceleratorTypeOffering.h>
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

AcceleratorTypeOffering::AcceleratorTypeOffering() : 
    m_acceleratorTypeHasBeenSet(false),
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

AcceleratorTypeOffering::AcceleratorTypeOffering(JsonView jsonValue) : 
    m_acceleratorTypeHasBeenSet(false),
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

AcceleratorTypeOffering& AcceleratorTypeOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceleratorType"))
  {
    m_acceleratorType = jsonValue.GetString("acceleratorType");

    m_acceleratorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("locationType"))
  {
    m_locationType = LocationTypeMapper::GetLocationTypeForName(jsonValue.GetString("locationType"));

    m_locationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceleratorTypeOffering::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorTypeHasBeenSet)
  {
   payload.WithString("acceleratorType", m_acceleratorType);

  }

  if(m_locationTypeHasBeenSet)
  {
   payload.WithString("locationType", LocationTypeMapper::GetNameForLocationType(m_locationType));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
