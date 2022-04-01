/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServicePlacementStrategiesDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsServicePlacementStrategiesDetails::AwsEcsServicePlacementStrategiesDetails() : 
    m_fieldHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsEcsServicePlacementStrategiesDetails::AwsEcsServicePlacementStrategiesDetails(JsonView jsonValue) : 
    m_fieldHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServicePlacementStrategiesDetails& AwsEcsServicePlacementStrategiesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = jsonValue.GetString("Field");

    m_fieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServicePlacementStrategiesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithString("Field", m_field);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
