/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListSecurityProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityProfilesResult::ListSecurityProfilesResult()
{
}

ListSecurityProfilesResult::ListSecurityProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityProfilesResult& ListSecurityProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("securityProfileIdentifiers"))
  {
    Aws::Utils::Array<JsonView> securityProfileIdentifiersJsonList = jsonValue.GetArray("securityProfileIdentifiers");
    for(unsigned securityProfileIdentifiersIndex = 0; securityProfileIdentifiersIndex < securityProfileIdentifiersJsonList.GetLength(); ++securityProfileIdentifiersIndex)
    {
      m_securityProfileIdentifiers.push_back(securityProfileIdentifiersJsonList[securityProfileIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
