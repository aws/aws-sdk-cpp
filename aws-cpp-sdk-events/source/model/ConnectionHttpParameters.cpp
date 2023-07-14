/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ConnectionHttpParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvents
{
namespace Model
{

ConnectionHttpParameters::ConnectionHttpParameters() : 
    m_headerParametersHasBeenSet(false),
    m_queryStringParametersHasBeenSet(false),
    m_bodyParametersHasBeenSet(false)
{
}

ConnectionHttpParameters::ConnectionHttpParameters(JsonView jsonValue) : 
    m_headerParametersHasBeenSet(false),
    m_queryStringParametersHasBeenSet(false),
    m_bodyParametersHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionHttpParameters& ConnectionHttpParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderParameters"))
  {
    Array<JsonView> headerParametersJsonList = jsonValue.GetArray("HeaderParameters");
    for(unsigned headerParametersIndex = 0; headerParametersIndex < headerParametersJsonList.GetLength(); ++headerParametersIndex)
    {
      m_headerParameters.push_back(headerParametersJsonList[headerParametersIndex].AsObject());
    }
    m_headerParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStringParameters"))
  {
    Array<JsonView> queryStringParametersJsonList = jsonValue.GetArray("QueryStringParameters");
    for(unsigned queryStringParametersIndex = 0; queryStringParametersIndex < queryStringParametersJsonList.GetLength(); ++queryStringParametersIndex)
    {
      m_queryStringParameters.push_back(queryStringParametersJsonList[queryStringParametersIndex].AsObject());
    }
    m_queryStringParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BodyParameters"))
  {
    Array<JsonView> bodyParametersJsonList = jsonValue.GetArray("BodyParameters");
    for(unsigned bodyParametersIndex = 0; bodyParametersIndex < bodyParametersJsonList.GetLength(); ++bodyParametersIndex)
    {
      m_bodyParameters.push_back(bodyParametersJsonList[bodyParametersIndex].AsObject());
    }
    m_bodyParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionHttpParameters::Jsonize() const
{
  JsonValue payload;

  if(m_headerParametersHasBeenSet)
  {
   Array<JsonValue> headerParametersJsonList(m_headerParameters.size());
   for(unsigned headerParametersIndex = 0; headerParametersIndex < headerParametersJsonList.GetLength(); ++headerParametersIndex)
   {
     headerParametersJsonList[headerParametersIndex].AsObject(m_headerParameters[headerParametersIndex].Jsonize());
   }
   payload.WithArray("HeaderParameters", std::move(headerParametersJsonList));

  }

  if(m_queryStringParametersHasBeenSet)
  {
   Array<JsonValue> queryStringParametersJsonList(m_queryStringParameters.size());
   for(unsigned queryStringParametersIndex = 0; queryStringParametersIndex < queryStringParametersJsonList.GetLength(); ++queryStringParametersIndex)
   {
     queryStringParametersJsonList[queryStringParametersIndex].AsObject(m_queryStringParameters[queryStringParametersIndex].Jsonize());
   }
   payload.WithArray("QueryStringParameters", std::move(queryStringParametersJsonList));

  }

  if(m_bodyParametersHasBeenSet)
  {
   Array<JsonValue> bodyParametersJsonList(m_bodyParameters.size());
   for(unsigned bodyParametersIndex = 0; bodyParametersIndex < bodyParametersJsonList.GetLength(); ++bodyParametersIndex)
   {
     bodyParametersJsonList[bodyParametersIndex].AsObject(m_bodyParameters[bodyParametersIndex].Jsonize());
   }
   payload.WithArray("BodyParameters", std::move(bodyParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
