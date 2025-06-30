/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/VectorSearchBedrockRerankingModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

VectorSearchBedrockRerankingModelConfiguration::VectorSearchBedrockRerankingModelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VectorSearchBedrockRerankingModelConfiguration& VectorSearchBedrockRerankingModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalModelRequestFields"))
  {
    Aws::Map<Aws::String, JsonView> additionalModelRequestFieldsJsonMap = jsonValue.GetObject("additionalModelRequestFields").GetAllObjects();
    for(auto& additionalModelRequestFieldsItem : additionalModelRequestFieldsJsonMap)
    {
      m_additionalModelRequestFields[additionalModelRequestFieldsItem.first] = additionalModelRequestFieldsItem.second.AsObject();
    }
    m_additionalModelRequestFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorSearchBedrockRerankingModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
   JsonValue additionalModelRequestFieldsJsonMap;
   for(auto& additionalModelRequestFieldsItem : m_additionalModelRequestFields)
   {
     additionalModelRequestFieldsJsonMap.WithObject(additionalModelRequestFieldsItem.first, additionalModelRequestFieldsItem.second.View());
   }
   payload.WithObject("additionalModelRequestFields", std::move(additionalModelRequestFieldsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
