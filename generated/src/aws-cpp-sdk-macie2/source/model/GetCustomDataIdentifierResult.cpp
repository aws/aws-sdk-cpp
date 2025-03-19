/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetCustomDataIdentifierResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomDataIdentifierResult::GetCustomDataIdentifierResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCustomDataIdentifierResult& GetCustomDataIdentifierResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleted"))
  {
    m_deleted = jsonValue.GetBool("deleted");
    m_deletedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ignoreWords"))
  {
    Aws::Utils::Array<JsonView> ignoreWordsJsonList = jsonValue.GetArray("ignoreWords");
    for(unsigned ignoreWordsIndex = 0; ignoreWordsIndex < ignoreWordsJsonList.GetLength(); ++ignoreWordsIndex)
    {
      m_ignoreWords.push_back(ignoreWordsJsonList[ignoreWordsIndex].AsString());
    }
    m_ignoreWordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keywords"))
  {
    Aws::Utils::Array<JsonView> keywordsJsonList = jsonValue.GetArray("keywords");
    for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
    {
      m_keywords.push_back(keywordsJsonList[keywordsIndex].AsString());
    }
    m_keywordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumMatchDistance"))
  {
    m_maximumMatchDistance = jsonValue.GetInteger("maximumMatchDistance");
    m_maximumMatchDistanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");
    m_regexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityLevels"))
  {
    Aws::Utils::Array<JsonView> severityLevelsJsonList = jsonValue.GetArray("severityLevels");
    for(unsigned severityLevelsIndex = 0; severityLevelsIndex < severityLevelsJsonList.GetLength(); ++severityLevelsIndex)
    {
      m_severityLevels.push_back(severityLevelsJsonList[severityLevelsIndex].AsObject());
    }
    m_severityLevelsHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
