/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptChoice.h>
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

AcceptChoice::AcceptChoice() : 
    m_predictionChoice(0),
    m_predictionChoiceHasBeenSet(false),
    m_predictionTargetHasBeenSet(false)
{
}

AcceptChoice::AcceptChoice(JsonView jsonValue) : 
    m_predictionChoice(0),
    m_predictionChoiceHasBeenSet(false),
    m_predictionTargetHasBeenSet(false)
{
  *this = jsonValue;
}

AcceptChoice& AcceptChoice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("predictionChoice"))
  {
    m_predictionChoice = jsonValue.GetInteger("predictionChoice");

    m_predictionChoiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictionTarget"))
  {
    m_predictionTarget = jsonValue.GetString("predictionTarget");

    m_predictionTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceptChoice::Jsonize() const
{
  JsonValue payload;

  if(m_predictionChoiceHasBeenSet)
  {
   payload.WithInteger("predictionChoice", m_predictionChoice);

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
