/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AccessBudget.h>
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

AccessBudget::AccessBudget(JsonView jsonValue)
{
  *this = jsonValue;
}

AccessBudget& AccessBudget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregateRemainingBudget"))
  {
    m_aggregateRemainingBudget = jsonValue.GetInteger("aggregateRemainingBudget");
    m_aggregateRemainingBudgetHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessBudget::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("details", std::move(detailsJsonList));

  }

  if(m_aggregateRemainingBudgetHasBeenSet)
  {
   payload.WithInteger("aggregateRemainingBudget", m_aggregateRemainingBudget);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
