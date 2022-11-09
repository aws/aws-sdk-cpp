/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListNodegroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNodegroupsResult::ListNodegroupsResult()
{
}

ListNodegroupsResult::ListNodegroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNodegroupsResult& ListNodegroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nodegroups"))
  {
    Aws::Utils::Array<JsonView> nodegroupsJsonList = jsonValue.GetArray("nodegroups");
    for(unsigned nodegroupsIndex = 0; nodegroupsIndex < nodegroupsJsonList.GetLength(); ++nodegroupsIndex)
    {
      m_nodegroups.push_back(nodegroupsJsonList[nodegroupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
