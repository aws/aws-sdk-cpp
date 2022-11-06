/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SsmDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

SsmDocument::SsmDocument() : 
    m_actionNameHasBeenSet(false),
    m_mustSucceedForCutover(false),
    m_mustSucceedForCutoverHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_ssmDocumentNameHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
}

SsmDocument::SsmDocument(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_mustSucceedForCutover(false),
    m_mustSucceedForCutoverHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_ssmDocumentNameHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

SsmDocument& SsmDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mustSucceedForCutover"))
  {
    m_mustSucceedForCutover = jsonValue.GetBool("mustSucceedForCutover");

    m_mustSucceedForCutoverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Aws::Utils::Array<JsonView> ssmParameterStoreParametersJsonList = parametersItem.second.AsArray();
      Aws::Vector<SsmParameterStoreParameter> ssmParameterStoreParametersList;
      ssmParameterStoreParametersList.reserve((size_t)ssmParameterStoreParametersJsonList.GetLength());
      for(unsigned ssmParameterStoreParametersIndex = 0; ssmParameterStoreParametersIndex < ssmParameterStoreParametersJsonList.GetLength(); ++ssmParameterStoreParametersIndex)
      {
        ssmParameterStoreParametersList.push_back(ssmParameterStoreParametersJsonList[ssmParameterStoreParametersIndex].AsObject());
      }
      m_parameters[parametersItem.first] = std::move(ssmParameterStoreParametersList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmDocumentName"))
  {
    m_ssmDocumentName = jsonValue.GetString("ssmDocumentName");

    m_ssmDocumentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmDocument::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_mustSucceedForCutoverHasBeenSet)
  {
   payload.WithBool("mustSucceedForCutover", m_mustSucceedForCutover);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Aws::Utils::Array<JsonValue> ssmParameterStoreParametersJsonList(parametersItem.second.size());
     for(unsigned ssmParameterStoreParametersIndex = 0; ssmParameterStoreParametersIndex < ssmParameterStoreParametersJsonList.GetLength(); ++ssmParameterStoreParametersIndex)
     {
       ssmParameterStoreParametersJsonList[ssmParameterStoreParametersIndex].AsObject(parametersItem.second[ssmParameterStoreParametersIndex].Jsonize());
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(ssmParameterStoreParametersJsonList));
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_ssmDocumentNameHasBeenSet)
  {
   payload.WithString("ssmDocumentName", m_ssmDocumentName);

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutSeconds", m_timeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
