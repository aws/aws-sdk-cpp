/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListHITsForQualificationTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHITsForQualificationTypeResult::ListHITsForQualificationTypeResult() : 
    m_numResults(0)
{
}

ListHITsForQualificationTypeResult::ListHITsForQualificationTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListHITsForQualificationTypeResult& ListHITsForQualificationTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("HITs"))
  {
    Aws::Utils::Array<JsonView> hITsJsonList = jsonValue.GetArray("HITs");
    for(unsigned hITsIndex = 0; hITsIndex < hITsJsonList.GetLength(); ++hITsIndex)
    {
      m_hITs.push_back(hITsJsonList[hITsIndex].AsObject());
    }
  }



  return *this;
}
