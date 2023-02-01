/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCoverageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoverageResult::ListCoverageResult()
{
}

ListCoverageResult::ListCoverageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCoverageResult& ListCoverageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("coveredResources"))
  {
    Aws::Utils::Array<JsonView> coveredResourcesJsonList = jsonValue.GetArray("coveredResources");
    for(unsigned coveredResourcesIndex = 0; coveredResourcesIndex < coveredResourcesJsonList.GetLength(); ++coveredResourcesIndex)
    {
      m_coveredResources.push_back(coveredResourcesJsonList[coveredResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
