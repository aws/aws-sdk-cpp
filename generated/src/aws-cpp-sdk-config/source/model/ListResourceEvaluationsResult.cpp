/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListResourceEvaluationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceEvaluationsResult::ListResourceEvaluationsResult()
{
}

ListResourceEvaluationsResult::ListResourceEvaluationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceEvaluationsResult& ListResourceEvaluationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceEvaluations"))
  {
    Aws::Utils::Array<JsonView> resourceEvaluationsJsonList = jsonValue.GetArray("ResourceEvaluations");
    for(unsigned resourceEvaluationsIndex = 0; resourceEvaluationsIndex < resourceEvaluationsJsonList.GetLength(); ++resourceEvaluationsIndex)
    {
      m_resourceEvaluations.push_back(resourceEvaluationsJsonList[resourceEvaluationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
