/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeDomainAutoTunesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDomainAutoTunesResult::DescribeDomainAutoTunesResult()
{
}

DescribeDomainAutoTunesResult::DescribeDomainAutoTunesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDomainAutoTunesResult& DescribeDomainAutoTunesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoTunes"))
  {
    Aws::Utils::Array<JsonView> autoTunesJsonList = jsonValue.GetArray("AutoTunes");
    for(unsigned autoTunesIndex = 0; autoTunesIndex < autoTunesJsonList.GetLength(); ++autoTunesIndex)
    {
      m_autoTunes.push_back(autoTunesJsonList[autoTunesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
