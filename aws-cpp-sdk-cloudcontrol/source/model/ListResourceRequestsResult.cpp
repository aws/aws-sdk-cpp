/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/ListResourceRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceRequestsResult::ListResourceRequestsResult()
{
}

ListResourceRequestsResult::ListResourceRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceRequestsResult& ListResourceRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceRequestStatusSummaries"))
  {
    Aws::Utils::Array<JsonView> resourceRequestStatusSummariesJsonList = jsonValue.GetArray("ResourceRequestStatusSummaries");
    for(unsigned resourceRequestStatusSummariesIndex = 0; resourceRequestStatusSummariesIndex < resourceRequestStatusSummariesJsonList.GetLength(); ++resourceRequestStatusSummariesIndex)
    {
      m_resourceRequestStatusSummaries.push_back(resourceRequestStatusSummariesJsonList[resourceRequestStatusSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
