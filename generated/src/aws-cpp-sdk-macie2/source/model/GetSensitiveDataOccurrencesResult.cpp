/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetSensitiveDataOccurrencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSensitiveDataOccurrencesResult::GetSensitiveDataOccurrencesResult() : 
    m_status(RevealRequestStatus::NOT_SET)
{
}

GetSensitiveDataOccurrencesResult::GetSensitiveDataOccurrencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(RevealRequestStatus::NOT_SET)
{
  *this = result;
}

GetSensitiveDataOccurrencesResult& GetSensitiveDataOccurrencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

  }

  if(jsonValue.ValueExists("sensitiveDataOccurrences"))
  {
    Aws::Map<Aws::String, JsonView> sensitiveDataOccurrencesJsonMap = jsonValue.GetObject("sensitiveDataOccurrences").GetAllObjects();
    for(auto& sensitiveDataOccurrencesItem : sensitiveDataOccurrencesJsonMap)
    {
      Aws::Utils::Array<JsonView> __listOfDetectedDataDetailsJsonList = sensitiveDataOccurrencesItem.second.AsArray();
      Aws::Vector<DetectedDataDetails> __listOfDetectedDataDetailsList;
      __listOfDetectedDataDetailsList.reserve((size_t)__listOfDetectedDataDetailsJsonList.GetLength());
      for(unsigned __listOfDetectedDataDetailsIndex = 0; __listOfDetectedDataDetailsIndex < __listOfDetectedDataDetailsJsonList.GetLength(); ++__listOfDetectedDataDetailsIndex)
      {
        __listOfDetectedDataDetailsList.push_back(__listOfDetectedDataDetailsJsonList[__listOfDetectedDataDetailsIndex].AsObject());
      }
      m_sensitiveDataOccurrences[sensitiveDataOccurrencesItem.first] = std::move(__listOfDetectedDataDetailsList);
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = RevealRequestStatusMapper::GetRevealRequestStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
