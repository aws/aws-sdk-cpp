/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ListDataSetRevisionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDataSetRevisionsResult::ListDataSetRevisionsResult()
{
}

ListDataSetRevisionsResult::ListDataSetRevisionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDataSetRevisionsResult& ListDataSetRevisionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Revisions"))
  {
    Aws::Utils::Array<JsonView> revisionsJsonList = jsonValue.GetArray("Revisions");
    for(unsigned revisionsIndex = 0; revisionsIndex < revisionsJsonList.GetLength(); ++revisionsIndex)
    {
      m_revisions.push_back(revisionsJsonList[revisionsIndex].AsObject());
    }
  }



  return *this;
}
