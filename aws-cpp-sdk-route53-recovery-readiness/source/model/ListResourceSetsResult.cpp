/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListResourceSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResourceSetsResult::ListResourceSetsResult()
{
}

ListResourceSetsResult::ListResourceSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResourceSetsResult& ListResourceSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("resourceSets"))
  {
    Aws::Utils::Array<JsonView> resourceSetsJsonList = jsonValue.GetArray("resourceSets");
    for(unsigned resourceSetsIndex = 0; resourceSetsIndex < resourceSetsJsonList.GetLength(); ++resourceSetsIndex)
    {
      m_resourceSets.push_back(resourceSetsJsonList[resourceSetsIndex].AsObject());
    }
  }



  return *this;
}
