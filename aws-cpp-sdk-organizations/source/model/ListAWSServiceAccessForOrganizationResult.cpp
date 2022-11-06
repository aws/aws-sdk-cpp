/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListAWSServiceAccessForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAWSServiceAccessForOrganizationResult::ListAWSServiceAccessForOrganizationResult()
{
}

ListAWSServiceAccessForOrganizationResult::ListAWSServiceAccessForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAWSServiceAccessForOrganizationResult& ListAWSServiceAccessForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EnabledServicePrincipals"))
  {
    Aws::Utils::Array<JsonView> enabledServicePrincipalsJsonList = jsonValue.GetArray("EnabledServicePrincipals");
    for(unsigned enabledServicePrincipalsIndex = 0; enabledServicePrincipalsIndex < enabledServicePrincipalsJsonList.GetLength(); ++enabledServicePrincipalsIndex)
    {
      m_enabledServicePrincipals.push_back(enabledServicePrincipalsJsonList[enabledServicePrincipalsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
