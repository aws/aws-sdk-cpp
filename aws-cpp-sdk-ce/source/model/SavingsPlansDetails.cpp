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

#include <aws/ce/model/SavingsPlansDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

SavingsPlansDetails::SavingsPlansDetails() : 
    m_regionHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
}

SavingsPlansDetails::SavingsPlansDetails(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_offeringIdHasBeenSet(false)
{
  *this = jsonValue;
}

SavingsPlansDetails& SavingsPlansDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceFamily"))
  {
    m_instanceFamily = jsonValue.GetString("InstanceFamily");

    m_instanceFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferingId"))
  {
    m_offeringId = jsonValue.GetString("OfferingId");

    m_offeringIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SavingsPlansDetails::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_instanceFamilyHasBeenSet)
  {
   payload.WithString("InstanceFamily", m_instanceFamily);

  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("OfferingId", m_offeringId);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
