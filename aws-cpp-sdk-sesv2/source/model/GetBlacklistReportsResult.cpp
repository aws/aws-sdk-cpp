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

#include <aws/sesv2/model/GetBlacklistReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBlacklistReportsResult::GetBlacklistReportsResult()
{
}

GetBlacklistReportsResult::GetBlacklistReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBlacklistReportsResult& GetBlacklistReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlacklistReport"))
  {
    Aws::Map<Aws::String, JsonView> blacklistReportJsonMap = jsonValue.GetObject("BlacklistReport").GetAllObjects();
    for(auto& blacklistReportItem : blacklistReportJsonMap)
    {
      Array<JsonView> blacklistEntriesJsonList = blacklistReportItem.second.AsArray();
      Aws::Vector<BlacklistEntry> blacklistEntriesList;
      blacklistEntriesList.reserve((size_t)blacklistEntriesJsonList.GetLength());
      for(unsigned blacklistEntriesIndex = 0; blacklistEntriesIndex < blacklistEntriesJsonList.GetLength(); ++blacklistEntriesIndex)
      {
        blacklistEntriesList.push_back(blacklistEntriesJsonList[blacklistEntriesIndex].AsObject());
      }
      m_blacklistReport[blacklistReportItem.first] = std::move(blacklistEntriesList);
    }
  }



  return *this;
}
