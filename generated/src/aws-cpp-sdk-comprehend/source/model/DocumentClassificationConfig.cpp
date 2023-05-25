/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassificationConfig.h>
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

DocumentClassificationConfig::DocumentClassificationConfig() : 
    m_mode(DocumentClassifierMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

DocumentClassificationConfig::DocumentClassificationConfig(JsonView jsonValue) : 
    m_mode(DocumentClassifierMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassificationConfig& DocumentClassificationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = DocumentClassifierModeMapper::GetDocumentClassifierModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassificationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", DocumentClassifierModeMapper::GetNameForDocumentClassifierMode(m_mode));
  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
