/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/ListVirtualClustersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualClustersResult::ListVirtualClustersResult()
{
}

ListVirtualClustersResult::ListVirtualClustersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVirtualClustersResult& ListVirtualClustersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualClusters"))
  {
    Aws::Utils::Array<JsonView> virtualClustersJsonList = jsonValue.GetArray("virtualClusters");
    for(unsigned virtualClustersIndex = 0; virtualClustersIndex < virtualClustersJsonList.GetLength(); ++virtualClustersIndex)
    {
      m_virtualClusters.push_back(virtualClustersJsonList[virtualClustersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
