/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentExtractionGranularity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

DocumentExtractionGranularity::DocumentExtractionGranularity(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentExtractionGranularity& DocumentExtractionGranularity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(DocumentExtractionGranularityTypeMapper::GetDocumentExtractionGranularityTypeForName(typesJsonList[typesIndex].AsString()));
    }
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentExtractionGranularity::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(DocumentExtractionGranularityTypeMapper::GetNameForDocumentExtractionGranularityType(m_types[typesIndex]));
   }
   payload.WithArray("types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
