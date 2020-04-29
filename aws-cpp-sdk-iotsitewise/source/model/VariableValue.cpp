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

#include <aws/iotsitewise/model/VariableValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

VariableValue::VariableValue() : 
    m_propertyIdHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false)
{
}

VariableValue::VariableValue(JsonView jsonValue) : 
    m_propertyIdHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false)
{
  *this = jsonValue;
}

VariableValue& VariableValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

    m_propertyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hierarchyId"))
  {
    m_hierarchyId = jsonValue.GetString("hierarchyId");

    m_hierarchyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableValue::Jsonize() const
{
  JsonValue payload;

  if(m_propertyIdHasBeenSet)
  {
   payload.WithString("propertyId", m_propertyId);

  }

  if(m_hierarchyIdHasBeenSet)
  {
   payload.WithString("hierarchyId", m_hierarchyId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
