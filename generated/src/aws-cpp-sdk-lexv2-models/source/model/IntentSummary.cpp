/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

IntentSummary::IntentSummary() : 
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentIntentSignatureHasBeenSet(false),
    m_inputContextsHasBeenSet(false),
    m_outputContextsHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

IntentSummary::IntentSummary(JsonView jsonValue) : 
    m_intentIdHasBeenSet(false),
    m_intentNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentIntentSignatureHasBeenSet(false),
    m_inputContextsHasBeenSet(false),
    m_outputContextsHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

IntentSummary& IntentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentId"))
  {
    m_intentId = jsonValue.GetString("intentId");

    m_intentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentIntentSignature"))
  {
    m_parentIntentSignature = jsonValue.GetString("parentIntentSignature");

    m_parentIntentSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputContexts"))
  {
    Aws::Utils::Array<JsonView> inputContextsJsonList = jsonValue.GetArray("inputContexts");
    for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
    {
      m_inputContexts.push_back(inputContextsJsonList[inputContextsIndex].AsObject());
    }
    m_inputContextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputContexts"))
  {
    Aws::Utils::Array<JsonView> outputContextsJsonList = jsonValue.GetArray("outputContexts");
    for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
    {
      m_outputContexts.push_back(outputContextsJsonList[outputContextsIndex].AsObject());
    }
    m_outputContextsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_intentIdHasBeenSet)
  {
   payload.WithString("intentId", m_intentId);

  }

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentIntentSignatureHasBeenSet)
  {
   payload.WithString("parentIntentSignature", m_parentIntentSignature);

  }

  if(m_inputContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputContextsJsonList(m_inputContexts.size());
   for(unsigned inputContextsIndex = 0; inputContextsIndex < inputContextsJsonList.GetLength(); ++inputContextsIndex)
   {
     inputContextsJsonList[inputContextsIndex].AsObject(m_inputContexts[inputContextsIndex].Jsonize());
   }
   payload.WithArray("inputContexts", std::move(inputContextsJsonList));

  }

  if(m_outputContextsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputContextsJsonList(m_outputContexts.size());
   for(unsigned outputContextsIndex = 0; outputContextsIndex < outputContextsJsonList.GetLength(); ++outputContextsIndex)
   {
     outputContextsJsonList[outputContextsIndex].AsObject(m_outputContexts[outputContextsIndex].Jsonize());
   }
   payload.WithArray("outputContexts", std::move(outputContextsJsonList));

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
