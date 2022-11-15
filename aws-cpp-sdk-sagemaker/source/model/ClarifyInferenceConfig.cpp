/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyInferenceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClarifyInferenceConfig::ClarifyInferenceConfig() : 
    m_featuresAttributeHasBeenSet(false),
    m_contentTemplateHasBeenSet(false),
    m_maxRecordCount(0),
    m_maxRecordCountHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_probabilityIndex(0),
    m_probabilityIndexHasBeenSet(false),
    m_labelIndex(0),
    m_labelIndexHasBeenSet(false),
    m_probabilityAttributeHasBeenSet(false),
    m_labelAttributeHasBeenSet(false),
    m_labelHeadersHasBeenSet(false),
    m_featureHeadersHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
}

ClarifyInferenceConfig::ClarifyInferenceConfig(JsonView jsonValue) : 
    m_featuresAttributeHasBeenSet(false),
    m_contentTemplateHasBeenSet(false),
    m_maxRecordCount(0),
    m_maxRecordCountHasBeenSet(false),
    m_maxPayloadInMB(0),
    m_maxPayloadInMBHasBeenSet(false),
    m_probabilityIndex(0),
    m_probabilityIndexHasBeenSet(false),
    m_labelIndex(0),
    m_labelIndexHasBeenSet(false),
    m_probabilityAttributeHasBeenSet(false),
    m_labelAttributeHasBeenSet(false),
    m_labelHeadersHasBeenSet(false),
    m_featureHeadersHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
  *this = jsonValue;
}

ClarifyInferenceConfig& ClarifyInferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeaturesAttribute"))
  {
    m_featuresAttribute = jsonValue.GetString("FeaturesAttribute");

    m_featuresAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentTemplate"))
  {
    m_contentTemplate = jsonValue.GetString("ContentTemplate");

    m_contentTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRecordCount"))
  {
    m_maxRecordCount = jsonValue.GetInteger("MaxRecordCount");

    m_maxRecordCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxPayloadInMB"))
  {
    m_maxPayloadInMB = jsonValue.GetInteger("MaxPayloadInMB");

    m_maxPayloadInMBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProbabilityIndex"))
  {
    m_probabilityIndex = jsonValue.GetInteger("ProbabilityIndex");

    m_probabilityIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelIndex"))
  {
    m_labelIndex = jsonValue.GetInteger("LabelIndex");

    m_labelIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProbabilityAttribute"))
  {
    m_probabilityAttribute = jsonValue.GetString("ProbabilityAttribute");

    m_probabilityAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelAttribute"))
  {
    m_labelAttribute = jsonValue.GetString("LabelAttribute");

    m_labelAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelHeaders"))
  {
    Aws::Utils::Array<JsonView> labelHeadersJsonList = jsonValue.GetArray("LabelHeaders");
    for(unsigned labelHeadersIndex = 0; labelHeadersIndex < labelHeadersJsonList.GetLength(); ++labelHeadersIndex)
    {
      m_labelHeaders.push_back(labelHeadersJsonList[labelHeadersIndex].AsString());
    }
    m_labelHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureHeaders"))
  {
    Aws::Utils::Array<JsonView> featureHeadersJsonList = jsonValue.GetArray("FeatureHeaders");
    for(unsigned featureHeadersIndex = 0; featureHeadersIndex < featureHeadersJsonList.GetLength(); ++featureHeadersIndex)
    {
      m_featureHeaders.push_back(featureHeadersJsonList[featureHeadersIndex].AsString());
    }
    m_featureHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(ClarifyFeatureTypeMapper::GetClarifyFeatureTypeForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
    m_featureTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue ClarifyInferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_featuresAttributeHasBeenSet)
  {
   payload.WithString("FeaturesAttribute", m_featuresAttribute);

  }

  if(m_contentTemplateHasBeenSet)
  {
   payload.WithString("ContentTemplate", m_contentTemplate);

  }

  if(m_maxRecordCountHasBeenSet)
  {
   payload.WithInteger("MaxRecordCount", m_maxRecordCount);

  }

  if(m_maxPayloadInMBHasBeenSet)
  {
   payload.WithInteger("MaxPayloadInMB", m_maxPayloadInMB);

  }

  if(m_probabilityIndexHasBeenSet)
  {
   payload.WithInteger("ProbabilityIndex", m_probabilityIndex);

  }

  if(m_labelIndexHasBeenSet)
  {
   payload.WithInteger("LabelIndex", m_labelIndex);

  }

  if(m_probabilityAttributeHasBeenSet)
  {
   payload.WithString("ProbabilityAttribute", m_probabilityAttribute);

  }

  if(m_labelAttributeHasBeenSet)
  {
   payload.WithString("LabelAttribute", m_labelAttribute);

  }

  if(m_labelHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelHeadersJsonList(m_labelHeaders.size());
   for(unsigned labelHeadersIndex = 0; labelHeadersIndex < labelHeadersJsonList.GetLength(); ++labelHeadersIndex)
   {
     labelHeadersJsonList[labelHeadersIndex].AsString(m_labelHeaders[labelHeadersIndex]);
   }
   payload.WithArray("LabelHeaders", std::move(labelHeadersJsonList));

  }

  if(m_featureHeadersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureHeadersJsonList(m_featureHeaders.size());
   for(unsigned featureHeadersIndex = 0; featureHeadersIndex < featureHeadersJsonList.GetLength(); ++featureHeadersIndex)
   {
     featureHeadersJsonList[featureHeadersIndex].AsString(m_featureHeaders[featureHeadersIndex]);
   }
   payload.WithArray("FeatureHeaders", std::move(featureHeadersJsonList));

  }

  if(m_featureTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureTypesJsonList(m_featureTypes.size());
   for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
   {
     featureTypesJsonList[featureTypesIndex].AsString(ClarifyFeatureTypeMapper::GetNameForClarifyFeatureType(m_featureTypes[featureTypesIndex]));
   }
   payload.WithArray("FeatureTypes", std::move(featureTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
