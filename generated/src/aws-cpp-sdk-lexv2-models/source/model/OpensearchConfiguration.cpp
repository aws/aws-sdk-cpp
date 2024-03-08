/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/OpensearchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

OpensearchConfiguration::OpensearchConfiguration() : 
    m_domainEndpointHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_exactResponse(false),
    m_exactResponseHasBeenSet(false),
    m_exactResponseFieldsHasBeenSet(false),
    m_includeFieldsHasBeenSet(false)
{
}

OpensearchConfiguration::OpensearchConfiguration(JsonView jsonValue) : 
    m_domainEndpointHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_exactResponse(false),
    m_exactResponseHasBeenSet(false),
    m_exactResponseFieldsHasBeenSet(false),
    m_includeFieldsHasBeenSet(false)
{
  *this = jsonValue;
}

OpensearchConfiguration& OpensearchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainEndpoint"))
  {
    m_domainEndpoint = jsonValue.GetString("domainEndpoint");

    m_domainEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexName"))
  {
    m_indexName = jsonValue.GetString("indexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exactResponse"))
  {
    m_exactResponse = jsonValue.GetBool("exactResponse");

    m_exactResponseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exactResponseFields"))
  {
    m_exactResponseFields = jsonValue.GetObject("exactResponseFields");

    m_exactResponseFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeFields"))
  {
    Aws::Utils::Array<JsonView> includeFieldsJsonList = jsonValue.GetArray("includeFields");
    for(unsigned includeFieldsIndex = 0; includeFieldsIndex < includeFieldsJsonList.GetLength(); ++includeFieldsIndex)
    {
      m_includeFields.push_back(includeFieldsJsonList[includeFieldsIndex].AsString());
    }
    m_includeFieldsHasBeenSet = true;
  }

  return *this;
}

JsonValue OpensearchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_domainEndpointHasBeenSet)
  {
   payload.WithString("domainEndpoint", m_domainEndpoint);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_exactResponseHasBeenSet)
  {
   payload.WithBool("exactResponse", m_exactResponse);

  }

  if(m_exactResponseFieldsHasBeenSet)
  {
   payload.WithObject("exactResponseFields", m_exactResponseFields.Jsonize());

  }

  if(m_includeFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeFieldsJsonList(m_includeFields.size());
   for(unsigned includeFieldsIndex = 0; includeFieldsIndex < includeFieldsJsonList.GetLength(); ++includeFieldsIndex)
   {
     includeFieldsJsonList[includeFieldsIndex].AsString(m_includeFields[includeFieldsIndex]);
   }
   payload.WithArray("includeFields", std::move(includeFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
