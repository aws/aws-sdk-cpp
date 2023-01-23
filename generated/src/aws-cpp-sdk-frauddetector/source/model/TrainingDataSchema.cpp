/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/TrainingDataSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

TrainingDataSchema::TrainingDataSchema() : 
    m_modelVariablesHasBeenSet(false),
    m_labelSchemaHasBeenSet(false)
{
}

TrainingDataSchema::TrainingDataSchema(JsonView jsonValue) : 
    m_modelVariablesHasBeenSet(false),
    m_labelSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

TrainingDataSchema& TrainingDataSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelVariables"))
  {
    Aws::Utils::Array<JsonView> modelVariablesJsonList = jsonValue.GetArray("modelVariables");
    for(unsigned modelVariablesIndex = 0; modelVariablesIndex < modelVariablesJsonList.GetLength(); ++modelVariablesIndex)
    {
      m_modelVariables.push_back(modelVariablesJsonList[modelVariablesIndex].AsString());
    }
    m_modelVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labelSchema"))
  {
    m_labelSchema = jsonValue.GetObject("labelSchema");

    m_labelSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue TrainingDataSchema::Jsonize() const
{
  JsonValue payload;

  if(m_modelVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelVariablesJsonList(m_modelVariables.size());
   for(unsigned modelVariablesIndex = 0; modelVariablesIndex < modelVariablesJsonList.GetLength(); ++modelVariablesIndex)
   {
     modelVariablesJsonList[modelVariablesIndex].AsString(m_modelVariables[modelVariablesIndex]);
   }
   payload.WithArray("modelVariables", std::move(modelVariablesJsonList));

  }

  if(m_labelSchemaHasBeenSet)
  {
   payload.WithObject("labelSchema", m_labelSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
