/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentReaderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentReaderConfig::DocumentReaderConfig() : 
    m_documentReadAction(DocumentReadAction::NOT_SET),
    m_documentReadActionHasBeenSet(false),
    m_documentReadMode(DocumentReadMode::NOT_SET),
    m_documentReadModeHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
}

DocumentReaderConfig::DocumentReaderConfig(JsonView jsonValue) : 
    m_documentReadAction(DocumentReadAction::NOT_SET),
    m_documentReadActionHasBeenSet(false),
    m_documentReadMode(DocumentReadMode::NOT_SET),
    m_documentReadModeHasBeenSet(false),
    m_featureTypesHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentReaderConfig& DocumentReaderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentReadAction"))
  {
    m_documentReadAction = DocumentReadActionMapper::GetDocumentReadActionForName(jsonValue.GetString("DocumentReadAction"));

    m_documentReadActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentReadMode"))
  {
    m_documentReadMode = DocumentReadModeMapper::GetDocumentReadModeForName(jsonValue.GetString("DocumentReadMode"));

    m_documentReadModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureTypes"))
  {
    Aws::Utils::Array<JsonView> featureTypesJsonList = jsonValue.GetArray("FeatureTypes");
    for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
    {
      m_featureTypes.push_back(DocumentReadFeatureTypesMapper::GetDocumentReadFeatureTypesForName(featureTypesJsonList[featureTypesIndex].AsString()));
    }
    m_featureTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentReaderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_documentReadActionHasBeenSet)
  {
   payload.WithString("DocumentReadAction", DocumentReadActionMapper::GetNameForDocumentReadAction(m_documentReadAction));
  }

  if(m_documentReadModeHasBeenSet)
  {
   payload.WithString("DocumentReadMode", DocumentReadModeMapper::GetNameForDocumentReadMode(m_documentReadMode));
  }

  if(m_featureTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureTypesJsonList(m_featureTypes.size());
   for(unsigned featureTypesIndex = 0; featureTypesIndex < featureTypesJsonList.GetLength(); ++featureTypesIndex)
   {
     featureTypesJsonList[featureTypesIndex].AsString(DocumentReadFeatureTypesMapper::GetNameForDocumentReadFeatureTypes(m_featureTypes[featureTypesIndex]));
   }
   payload.WithArray("FeatureTypes", std::move(featureTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
