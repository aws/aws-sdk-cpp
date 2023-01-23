/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListSecurityProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
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
  if(jsonValue.ValueExists("SecurityProfileSummaryList"))
  {
    Aws::Utils::Array<JsonView> securityProfileSummaryListJsonList = jsonValue.GetArray("SecurityProfileSummaryList");
    for(unsigned securityProfileSummaryListIndex = 0; securityProfileSummaryListIndex < securityProfileSummaryListJsonList.GetLength(); ++securityProfileSummaryListIndex)
    {
      m_securityProfileSummaryList.push_back(securityProfileSummaryListJsonList[securityProfileSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
