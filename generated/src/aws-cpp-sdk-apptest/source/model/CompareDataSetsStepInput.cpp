/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CompareDataSetsStepInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

CompareDataSetsStepInput::CompareDataSetsStepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareDataSetsStepInput& CompareDataSetsStepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceLocation"))
  {
    m_sourceLocation = jsonValue.GetString("sourceLocation");
    m_sourceLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetLocation"))
  {
    m_targetLocation = jsonValue.GetString("targetLocation");
    m_targetLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceDataSets"))
  {
    Aws::Utils::Array<JsonView> sourceDataSetsJsonList = jsonValue.GetArray("sourceDataSets");
    for(unsigned sourceDataSetsIndex = 0; sourceDataSetsIndex < sourceDataSetsJsonList.GetLength(); ++sourceDataSetsIndex)
    {
      m_sourceDataSets.push_back(sourceDataSetsJsonList[sourceDataSetsIndex].AsObject());
    }
    m_sourceDataSetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetDataSets"))
  {
    Aws::Utils::Array<JsonView> targetDataSetsJsonList = jsonValue.GetArray("targetDataSets");
    for(unsigned targetDataSetsIndex = 0; targetDataSetsIndex < targetDataSetsJsonList.GetLength(); ++targetDataSetsIndex)
    {
      m_targetDataSets.push_back(targetDataSetsJsonList[targetDataSetsIndex].AsObject());
    }
    m_targetDataSetsHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareDataSetsStepInput::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationHasBeenSet)
  {
   payload.WithString("sourceLocation", m_sourceLocation);

  }

  if(m_targetLocationHasBeenSet)
  {
   payload.WithString("targetLocation", m_targetLocation);

  }

  if(m_sourceDataSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDataSetsJsonList(m_sourceDataSets.size());
   for(unsigned sourceDataSetsIndex = 0; sourceDataSetsIndex < sourceDataSetsJsonList.GetLength(); ++sourceDataSetsIndex)
   {
     sourceDataSetsJsonList[sourceDataSetsIndex].AsObject(m_sourceDataSets[sourceDataSetsIndex].Jsonize());
   }
   payload.WithArray("sourceDataSets", std::move(sourceDataSetsJsonList));

  }

  if(m_targetDataSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDataSetsJsonList(m_targetDataSets.size());
   for(unsigned targetDataSetsIndex = 0; targetDataSetsIndex < targetDataSetsJsonList.GetLength(); ++targetDataSetsIndex)
   {
     targetDataSetsJsonList[targetDataSetsIndex].AsObject(m_targetDataSets[targetDataSetsIndex].Jsonize());
   }
   payload.WithArray("targetDataSets", std::move(targetDataSetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
