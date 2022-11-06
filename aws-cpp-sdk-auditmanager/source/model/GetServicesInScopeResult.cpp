/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetServicesInScopeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetServicesInScopeResult::GetServicesInScopeResult()
{
}

GetServicesInScopeResult::GetServicesInScopeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetServicesInScopeResult& GetServicesInScopeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serviceMetadata"))
  {
    Aws::Utils::Array<JsonView> serviceMetadataJsonList = jsonValue.GetArray("serviceMetadata");
    for(unsigned serviceMetadataIndex = 0; serviceMetadataIndex < serviceMetadataJsonList.GetLength(); ++serviceMetadataIndex)
    {
      m_serviceMetadata.push_back(serviceMetadataJsonList[serviceMetadataIndex].AsObject());
    }
  }



  return *this;
}
