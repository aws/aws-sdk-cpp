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

#include <aws/glacier/model/ProvisionedCapacityDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

ProvisionedCapacityDescription::ProvisionedCapacityDescription() : 
    m_capacityIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
}

ProvisionedCapacityDescription::ProvisionedCapacityDescription(const JsonValue& jsonValue) : 
    m_capacityIdHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedCapacityDescription& ProvisionedCapacityDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CapacityId"))
  {
    m_capacityId = jsonValue.GetString("CapacityId");

    m_capacityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedCapacityDescription::Jsonize() const
{
  JsonValue payload;

  if(m_capacityIdHasBeenSet)
  {
   payload.WithString("CapacityId", m_capacityId);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws