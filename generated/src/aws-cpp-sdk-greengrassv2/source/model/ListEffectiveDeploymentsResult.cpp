/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListEffectiveDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEffectiveDeploymentsResult::ListEffectiveDeploymentsResult()
{
}

ListEffectiveDeploymentsResult::ListEffectiveDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEffectiveDeploymentsResult& ListEffectiveDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("effectiveDeployments"))
  {
    Aws::Utils::Array<JsonView> effectiveDeploymentsJsonList = jsonValue.GetArray("effectiveDeployments");
    for(unsigned effectiveDeploymentsIndex = 0; effectiveDeploymentsIndex < effectiveDeploymentsJsonList.GetLength(); ++effectiveDeploymentsIndex)
    {
      m_effectiveDeployments.push_back(effectiveDeploymentsJsonList[effectiveDeploymentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
