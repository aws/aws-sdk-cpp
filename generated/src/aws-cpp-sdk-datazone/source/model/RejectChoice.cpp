/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RejectChoice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RejectChoice::RejectChoice() : 
    m_predictionChoicesHasBeenSet(false),
    m_predictionTargetHasBeenSet(false)
{
}

RejectChoice::RejectChoice(JsonView jsonValue) : 
    m_predictionChoicesHasBeenSet(false),
    m_predictionTargetHasBeenSet(false)
{
  *this = jsonValue;
}

RejectChoice& RejectChoice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("predictionChoices"))
  {
    Aws::Utils::Array<JsonView> predictionChoicesJsonList = jsonValue.GetArray("predictionChoices");
    for(unsigned predictionChoicesIndex = 0; predictionChoicesIndex < predictionChoicesJsonList.GetLength(); ++predictionChoicesIndex)
    {
      m_predictionChoices.push_back(predictionChoicesJsonList[predictionChoicesIndex].AsInteger());
    }
    m_predictionChoicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictionTarget"))
  {
    m_predictionTarget = jsonValue.GetString("predictionTarget");

    m_predictionTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue RejectChoice::Jsonize() const
{
  JsonValue payload;

  if(m_predictionChoicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> predictionChoicesJsonList(m_predictionChoices.size());
   for(unsigned predictionChoicesIndex = 0; predictionChoicesIndex < predictionChoicesJsonList.GetLength(); ++predictionChoicesIndex)
   {
     predictionChoicesJsonList[predictionChoicesIndex].AsInteger(m_predictionChoices[predictionChoicesIndex]);
   }
   payload.WithArray("predictionChoices", std::move(predictionChoicesJsonList));

  }

  if(m_predictionTargetHasBeenSet)
  {
   payload.WithString("predictionTarget", m_predictionTarget);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
