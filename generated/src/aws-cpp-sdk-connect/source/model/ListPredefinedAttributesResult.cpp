/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListPredefinedAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPredefinedAttributesResult::ListPredefinedAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPredefinedAttributesResult& ListPredefinedAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredefinedAttributeSummaryList"))
  {
    Aws::Utils::Array<JsonView> predefinedAttributeSummaryListJsonList = jsonValue.GetArray("PredefinedAttributeSummaryList");
    for(unsigned predefinedAttributeSummaryListIndex = 0; predefinedAttributeSummaryListIndex < predefinedAttributeSummaryListJsonList.GetLength(); ++predefinedAttributeSummaryListIndex)
    {
      m_predefinedAttributeSummaryList.push_back(predefinedAttributeSummaryListJsonList[predefinedAttributeSummaryListIndex].AsObject());
    }
    m_predefinedAttributeSummaryListHasBeenSet = true;
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
