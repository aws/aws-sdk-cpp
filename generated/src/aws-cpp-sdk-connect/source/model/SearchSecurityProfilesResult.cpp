/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchSecurityProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchSecurityProfilesResult::SearchSecurityProfilesResult() : 
    m_approximateTotalCount(0)
{
}

SearchSecurityProfilesResult::SearchSecurityProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

SearchSecurityProfilesResult& SearchSecurityProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityProfiles"))
  {
    Aws::Utils::Array<JsonView> securityProfilesJsonList = jsonValue.GetArray("SecurityProfiles");
    for(unsigned securityProfilesIndex = 0; securityProfilesIndex < securityProfilesJsonList.GetLength(); ++securityProfilesIndex)
    {
      m_securityProfiles.push_back(securityProfilesJsonList[securityProfilesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }



  return *this;
}
