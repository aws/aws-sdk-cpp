/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BatchGetApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetApplicationsResult::BatchGetApplicationsResult()
{
}

BatchGetApplicationsResult::BatchGetApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetApplicationsResult& BatchGetApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationsInfo"))
  {
    Aws::Utils::Array<JsonView> applicationsInfoJsonList = jsonValue.GetArray("applicationsInfo");
    for(unsigned applicationsInfoIndex = 0; applicationsInfoIndex < applicationsInfoJsonList.GetLength(); ++applicationsInfoIndex)
    {
      m_applicationsInfo.push_back(applicationsInfoJsonList[applicationsInfoIndex].AsObject());
    }
  }



  return *this;
}
