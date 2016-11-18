/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/model/SuggestModel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

SuggestModel::SuggestModel() : 
    m_queryHasBeenSet(false),
    m_found(0),
    m_foundHasBeenSet(false),
    m_suggestionsHasBeenSet(false)
{
}

SuggestModel::SuggestModel(const JsonValue& jsonValue) : 
    m_queryHasBeenSet(false),
    m_found(0),
    m_foundHasBeenSet(false),
    m_suggestionsHasBeenSet(false)
{
  *this = jsonValue;
}

SuggestModel& SuggestModel::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("query"))
  {
    m_query = jsonValue.GetString("query");

    m_queryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("found"))
  {
    m_found = jsonValue.GetInt64("found");

    m_foundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suggestions"))
  {
    Array<JsonValue> suggestionsJsonList = jsonValue.GetArray("suggestions");
    for(unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex)
    {
      m_suggestions.push_back(suggestionsJsonList[suggestionsIndex].AsObject());
    }
    m_suggestionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SuggestModel::Jsonize() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("query", m_query);

  }

  if(m_foundHasBeenSet)
  {
   payload.WithInt64("found", m_found);

  }

  if(m_suggestionsHasBeenSet)
  {
   Array<JsonValue> suggestionsJsonList(m_suggestions.size());
   for(unsigned suggestionsIndex = 0; suggestionsIndex < suggestionsJsonList.GetLength(); ++suggestionsIndex)
   {
     suggestionsJsonList[suggestionsIndex].AsObject(m_suggestions[suggestionsIndex].Jsonize());
   }
   payload.WithArray("suggestions", std::move(suggestionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws