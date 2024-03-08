/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DifferentialPrivacyPrivacyBudget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

DifferentialPrivacyPrivacyBudget::DifferentialPrivacyPrivacyBudget() : 
    m_aggregationsHasBeenSet(false),
    m_epsilon(0),
    m_epsilonHasBeenSet(false)
{
}

DifferentialPrivacyPrivacyBudget::DifferentialPrivacyPrivacyBudget(JsonView jsonValue) : 
    m_aggregationsHasBeenSet(false),
    m_epsilon(0),
    m_epsilonHasBeenSet(false)
{
  *this = jsonValue;
}

DifferentialPrivacyPrivacyBudget& DifferentialPrivacyPrivacyBudget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregations"))
  {
    Aws::Utils::Array<JsonView> aggregationsJsonList = jsonValue.GetArray("aggregations");
    for(unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex)
    {
      m_aggregations.push_back(aggregationsJsonList[aggregationsIndex].AsObject());
    }
    m_aggregationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("epsilon"))
  {
    m_epsilon = jsonValue.GetInteger("epsilon");

    m_epsilonHasBeenSet = true;
  }

  return *this;
}

JsonValue DifferentialPrivacyPrivacyBudget::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregationsJsonList(m_aggregations.size());
   for(unsigned aggregationsIndex = 0; aggregationsIndex < aggregationsJsonList.GetLength(); ++aggregationsIndex)
   {
     aggregationsJsonList[aggregationsIndex].AsObject(m_aggregations[aggregationsIndex].Jsonize());
   }
   payload.WithArray("aggregations", std::move(aggregationsJsonList));

  }

  if(m_epsilonHasBeenSet)
  {
   payload.WithInteger("epsilon", m_epsilon);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
