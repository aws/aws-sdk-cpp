/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListRelatedResourcesForAuditFindingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRelatedResourcesForAuditFindingResult::ListRelatedResourcesForAuditFindingResult()
{
}

ListRelatedResourcesForAuditFindingResult::ListRelatedResourcesForAuditFindingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRelatedResourcesForAuditFindingResult& ListRelatedResourcesForAuditFindingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("relatedResources"))
  {
    Aws::Utils::Array<JsonView> relatedResourcesJsonList = jsonValue.GetArray("relatedResources");
    for(unsigned relatedResourcesIndex = 0; relatedResourcesIndex < relatedResourcesJsonList.GetLength(); ++relatedResourcesIndex)
    {
      m_relatedResources.push_back(relatedResourcesJsonList[relatedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
