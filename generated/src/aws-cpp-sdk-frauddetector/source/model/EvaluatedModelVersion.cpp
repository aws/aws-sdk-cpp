/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EvaluatedModelVersion.h>
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

EvaluatedModelVersion::EvaluatedModelVersion() : 
    m_modelIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_evaluationsHasBeenSet(false)
{
}

EvaluatedModelVersion::EvaluatedModelVersion(JsonView jsonValue) : 
    m_modelIdHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_evaluationsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluatedModelVersion& EvaluatedModelVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

    m_modelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelVersion"))
  {
    m_modelVersion = jsonValue.GetString("modelVersion");

    m_modelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelType"))
  {
    m_modelType = jsonValue.GetString("modelType");

    m_modelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluations"))
  {
    Aws::Utils::Array<JsonView> evaluationsJsonList = jsonValue.GetArray("evaluations");
    for(unsigned evaluationsIndex = 0; evaluationsIndex < evaluationsJsonList.GetLength(); ++evaluationsIndex)
    {
      m_evaluations.push_back(evaluationsJsonList[evaluationsIndex].AsObject());
    }
    m_evaluationsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluatedModelVersion::Jsonize() const
{
  JsonValue payload;

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("modelVersion", m_modelVersion);

  }

  if(m_modelTypeHasBeenSet)
  {
   payload.WithString("modelType", m_modelType);

  }

  if(m_evaluationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluationsJsonList(m_evaluations.size());
   for(unsigned evaluationsIndex = 0; evaluationsIndex < evaluationsJsonList.GetLength(); ++evaluationsIndex)
   {
     evaluationsJsonList[evaluationsIndex].AsObject(m_evaluations[evaluationsIndex].Jsonize());
   }
   payload.WithArray("evaluations", std::move(evaluationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
