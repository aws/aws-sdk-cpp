/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchPredefinedAttributesResult.h>
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

SearchPredefinedAttributesResult::SearchPredefinedAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchPredefinedAttributesResult& SearchPredefinedAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredefinedAttributes"))
  {
    Aws::Utils::Array<JsonView> predefinedAttributesJsonList = jsonValue.GetArray("PredefinedAttributes");
    for(unsigned predefinedAttributesIndex = 0; predefinedAttributesIndex < predefinedAttributesJsonList.GetLength(); ++predefinedAttributesIndex)
    {
      m_predefinedAttributes.push_back(predefinedAttributesJsonList[predefinedAttributesIndex].AsObject());
    }
    m_predefinedAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");
    m_approximateTotalCountHasBeenSet = true;
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
