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

#include <aws/macie2/model/GetCustomDataIdentifierResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomDataIdentifierResult::GetCustomDataIdentifierResult() : 
    m_deleted(false),
    m_maximumMatchDistance(0)
{
}

GetCustomDataIdentifierResult::GetCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_deleted(false),
    m_maximumMatchDistance(0)
{
  *this = result;
}

GetCustomDataIdentifierResult& GetCustomDataIdentifierResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("deleted"))
  {
    m_deleted = jsonValue.GetBool("deleted");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("ignoreWords"))
  {
    Array<JsonView> ignoreWordsJsonList = jsonValue.GetArray("ignoreWords");
    for(unsigned ignoreWordsIndex = 0; ignoreWordsIndex < ignoreWordsJsonList.GetLength(); ++ignoreWordsIndex)
    {
      m_ignoreWords.push_back(ignoreWordsJsonList[ignoreWordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("keywords"))
  {
    Array<JsonView> keywordsJsonList = jsonValue.GetArray("keywords");
    for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
    {
      m_keywords.push_back(keywordsJsonList[keywordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("maximumMatchDistance"))
  {
    m_maximumMatchDistance = jsonValue.GetInteger("maximumMatchDistance");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
