/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SourceServerActionDocument.h>
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

SourceServerActionDocument::SourceServerActionDocument() : 
    m_actionIDHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_documentIdentifierHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_mustSucceedForCutover(false),
    m_mustSucceedForCutoverHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
}

SourceServerActionDocument::SourceServerActionDocument(JsonView jsonValue) : 
    m_actionIDHasBeenSet(false),
    m_actionNameHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_documentIdentifierHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_mustSucceedForCutover(false),
    m_mustSucceedForCutoverHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceServerActionDocument& SourceServerActionDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionID"))
  {
    m_actionID = jsonValue.GetString("actionID");

    m_actionIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentIdentifier"))
  {
    m_documentIdentifier = jsonValue.GetString("documentIdentifier");

    m_documentIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentVersion"))
  {
    m_documentVersion = jsonValue.GetString("documentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mustSucceedForCutover"))
  {
    m_mustSucceedForCutover = jsonValue.GetBool("mustSucceedForCutover");

    m_mustSucceedForCutoverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("order"))
  {
    m_order = jsonValue.GetInteger("order");

    m_orderHasBeenSet = true;
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

  if(jsonValue.ValueExists("timeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceServerActionDocument::Jsonize() const
{
  JsonValue payload;

  if(m_actionIDHasBeenSet)
  {
   payload.WithString("actionID", m_actionID);

  }

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_documentIdentifierHasBeenSet)
  {
   payload.WithString("documentIdentifier", m_documentIdentifier);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("documentVersion", m_documentVersion);

  }

  if(m_mustSucceedForCutoverHasBeenSet)
  {
   payload.WithBool("mustSucceedForCutover", m_mustSucceedForCutover);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

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

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("timeoutSeconds", m_timeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
