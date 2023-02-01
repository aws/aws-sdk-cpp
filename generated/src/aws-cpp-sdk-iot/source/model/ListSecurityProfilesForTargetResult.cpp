/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListSecurityProfilesForTargetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityProfilesForTargetResult::ListSecurityProfilesForTargetResult()
{
}

ListSecurityProfilesForTargetResult::ListSecurityProfilesForTargetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityProfilesForTargetResult& ListSecurityProfilesForTargetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("securityProfileTargetMappings"))
  {
    Aws::Utils::Array<JsonView> securityProfileTargetMappingsJsonList = jsonValue.GetArray("securityProfileTargetMappings");
    for(unsigned securityProfileTargetMappingsIndex = 0; securityProfileTargetMappingsIndex < securityProfileTargetMappingsJsonList.GetLength(); ++securityProfileTargetMappingsIndex)
    {
      m_securityProfileTargetMappings.push_back(securityProfileTargetMappingsJsonList[securityProfileTargetMappingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
