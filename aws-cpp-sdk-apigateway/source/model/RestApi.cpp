/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/apigateway/model/RestApi.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

RestApi::RestApi() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false),
    m_minimumCompressionSize(0),
    m_minimumCompressionSizeHasBeenSet(false),
    m_apiKeySource(ApiKeySourceType::NOT_SET),
    m_apiKeySourceHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RestApi::RestApi(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_binaryMediaTypesHasBeenSet(false),
    m_minimumCompressionSize(0),
    m_minimumCompressionSizeHasBeenSet(false),
    m_apiKeySource(ApiKeySourceType::NOT_SET),
    m_apiKeySourceHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RestApi& RestApi::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warnings"))
  {
    Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("binaryMediaTypes"))
  {
    Array<JsonView> binaryMediaTypesJsonList = jsonValue.GetArray("binaryMediaTypes");
    for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
    {
      m_binaryMediaTypes.push_back(binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString());
    }
    m_binaryMediaTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumCompressionSize"))
  {
    m_minimumCompressionSize = jsonValue.GetInteger("minimumCompressionSize");

    m_minimumCompressionSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeySource"))
  {
    m_apiKeySource = ApiKeySourceTypeMapper::GetApiKeySourceTypeForName(jsonValue.GetString("apiKeySource"));

    m_apiKeySourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");

    m_endpointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RestApi::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_warningsHasBeenSet)
  {
   Array<JsonValue> warningsJsonList(m_warnings.size());
   for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
   {
     warningsJsonList[warningsIndex].AsString(m_warnings[warningsIndex]);
   }
   payload.WithArray("warnings", std::move(warningsJsonList));

  }

  if(m_binaryMediaTypesHasBeenSet)
  {
   Array<JsonValue> binaryMediaTypesJsonList(m_binaryMediaTypes.size());
   for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
   {
     binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString(m_binaryMediaTypes[binaryMediaTypesIndex]);
   }
   payload.WithArray("binaryMediaTypes", std::move(binaryMediaTypesJsonList));

  }

  if(m_minimumCompressionSizeHasBeenSet)
  {
   payload.WithInteger("minimumCompressionSize", m_minimumCompressionSize);

  }

  if(m_apiKeySourceHasBeenSet)
  {
   payload.WithString("apiKeySource", ApiKeySourceTypeMapper::GetNameForApiKeySourceType(m_apiKeySource));
  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
