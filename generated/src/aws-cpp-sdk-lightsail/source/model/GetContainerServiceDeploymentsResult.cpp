/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContainerServiceDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContainerServiceDeploymentsResult::GetContainerServiceDeploymentsResult()
{
}

GetContainerServiceDeploymentsResult::GetContainerServiceDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContainerServiceDeploymentsResult& GetContainerServiceDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deployments"))
  {
    Aws::Utils::Array<JsonView> deploymentsJsonList = jsonValue.GetArray("deployments");
    for(unsigned deploymentsIndex = 0; deploymentsIndex < deploymentsJsonList.GetLength(); ++deploymentsIndex)
    {
      m_deployments.push_back(deploymentsJsonList[deploymentsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
