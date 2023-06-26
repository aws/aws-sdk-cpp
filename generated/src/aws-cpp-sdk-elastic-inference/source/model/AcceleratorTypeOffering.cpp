/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
