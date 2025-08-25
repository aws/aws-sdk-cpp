/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12CodeListValidationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12CodeListValidationRule::X12CodeListValidationRule(JsonView jsonValue)
{
  *this = jsonValue;
}

X12CodeListValidationRule& X12CodeListValidationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elementId"))
  {
    m_elementId = jsonValue.GetString("elementId");
    m_elementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codesToAdd"))
  {
    Aws::Utils::Array<JsonView> codesToAddJsonList = jsonValue.GetArray("codesToAdd");
    for(unsigned codesToAddIndex = 0; codesToAddIndex < codesToAddJsonList.GetLength(); ++codesToAddIndex)
    {
      m_codesToAdd.push_back(codesToAddJsonList[codesToAddIndex].AsString());
    }
    m_codesToAddHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codesToRemove"))
  {
    Aws::Utils::Array<JsonView> codesToRemoveJsonList = jsonValue.GetArray("codesToRemove");
    for(unsigned codesToRemoveIndex = 0; codesToRemoveIndex < codesToRemoveJsonList.GetLength(); ++codesToRemoveIndex)
    {
      m_codesToRemove.push_back(codesToRemoveJsonList[codesToRemoveIndex].AsString());
    }
    m_codesToRemoveHasBeenSet = true;
  }
  return *this;
}

JsonValue X12CodeListValidationRule::Jsonize() const
{
  JsonValue payload;

  if(m_elementIdHasBeenSet)
  {
   payload.WithString("elementId", m_elementId);

  }

  if(m_codesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codesToAddJsonList(m_codesToAdd.size());
   for(unsigned codesToAddIndex = 0; codesToAddIndex < codesToAddJsonList.GetLength(); ++codesToAddIndex)
   {
     codesToAddJsonList[codesToAddIndex].AsString(m_codesToAdd[codesToAddIndex]);
   }
   payload.WithArray("codesToAdd", std::move(codesToAddJsonList));

  }

  if(m_codesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codesToRemoveJsonList(m_codesToRemove.size());
   for(unsigned codesToRemoveIndex = 0; codesToRemoveIndex < codesToRemoveJsonList.GetLength(); ++codesToRemoveIndex)
   {
     codesToRemoveJsonList[codesToRemoveIndex].AsString(m_codesToRemove[codesToRemoveIndex]);
   }
   payload.WithArray("codesToRemove", std::move(codesToRemoveJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
