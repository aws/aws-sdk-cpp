/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PIIDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

PIIDetection::PIIDetection(JsonView jsonValue)
{
  *this = jsonValue;
}

PIIDetection& PIIDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PiiType"))
  {
    m_piiType = PiiTypeMapper::GetPiiTypeForName(jsonValue.GetString("PiiType"));
    m_piiTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntityTypesToDetect"))
  {
    Aws::Utils::Array<JsonView> entityTypesToDetectJsonList = jsonValue.GetArray("EntityTypesToDetect");
    for(unsigned entityTypesToDetectIndex = 0; entityTypesToDetectIndex < entityTypesToDetectJsonList.GetLength(); ++entityTypesToDetectIndex)
    {
      m_entityTypesToDetect.push_back(entityTypesToDetectJsonList[entityTypesToDetectIndex].AsString());
    }
    m_entityTypesToDetectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OutputColumnName"))
  {
    m_outputColumnName = jsonValue.GetString("OutputColumnName");
    m_outputColumnNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SampleFraction"))
  {
    m_sampleFraction = jsonValue.GetDouble("SampleFraction");
    m_sampleFractionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThresholdFraction"))
  {
    m_thresholdFraction = jsonValue.GetDouble("ThresholdFraction");
    m_thresholdFractionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaskValue"))
  {
    m_maskValue = jsonValue.GetString("MaskValue");
    m_maskValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedactText"))
  {
    m_redactText = jsonValue.GetString("RedactText");
    m_redactTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RedactChar"))
  {
    m_redactChar = jsonValue.GetString("RedactChar");
    m_redactCharHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchPattern"))
  {
    m_matchPattern = jsonValue.GetString("MatchPattern");
    m_matchPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumLeftCharsToExclude"))
  {
    m_numLeftCharsToExclude = jsonValue.GetInteger("NumLeftCharsToExclude");
    m_numLeftCharsToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumRightCharsToExclude"))
  {
    m_numRightCharsToExclude = jsonValue.GetInteger("NumRightCharsToExclude");
    m_numRightCharsToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DetectionParameters"))
  {
    m_detectionParameters = jsonValue.GetString("DetectionParameters");
    m_detectionParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DetectionSensitivity"))
  {
    m_detectionSensitivity = jsonValue.GetString("DetectionSensitivity");
    m_detectionSensitivityHasBeenSet = true;
  }
  return *this;
}

JsonValue PIIDetection::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_piiTypeHasBeenSet)
  {
   payload.WithString("PiiType", PiiTypeMapper::GetNameForPiiType(m_piiType));
  }

  if(m_entityTypesToDetectHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesToDetectJsonList(m_entityTypesToDetect.size());
   for(unsigned entityTypesToDetectIndex = 0; entityTypesToDetectIndex < entityTypesToDetectJsonList.GetLength(); ++entityTypesToDetectIndex)
   {
     entityTypesToDetectJsonList[entityTypesToDetectIndex].AsString(m_entityTypesToDetect[entityTypesToDetectIndex]);
   }
   payload.WithArray("EntityTypesToDetect", std::move(entityTypesToDetectJsonList));

  }

  if(m_outputColumnNameHasBeenSet)
  {
   payload.WithString("OutputColumnName", m_outputColumnName);

  }

  if(m_sampleFractionHasBeenSet)
  {
   payload.WithDouble("SampleFraction", m_sampleFraction);

  }

  if(m_thresholdFractionHasBeenSet)
  {
   payload.WithDouble("ThresholdFraction", m_thresholdFraction);

  }

  if(m_maskValueHasBeenSet)
  {
   payload.WithString("MaskValue", m_maskValue);

  }

  if(m_redactTextHasBeenSet)
  {
   payload.WithString("RedactText", m_redactText);

  }

  if(m_redactCharHasBeenSet)
  {
   payload.WithString("RedactChar", m_redactChar);

  }

  if(m_matchPatternHasBeenSet)
  {
   payload.WithString("MatchPattern", m_matchPattern);

  }

  if(m_numLeftCharsToExcludeHasBeenSet)
  {
   payload.WithInteger("NumLeftCharsToExclude", m_numLeftCharsToExclude);

  }

  if(m_numRightCharsToExcludeHasBeenSet)
  {
   payload.WithInteger("NumRightCharsToExclude", m_numRightCharsToExclude);

  }

  if(m_detectionParametersHasBeenSet)
  {
   payload.WithString("DetectionParameters", m_detectionParameters);

  }

  if(m_detectionSensitivityHasBeenSet)
  {
   payload.WithString("DetectionSensitivity", m_detectionSensitivity);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
