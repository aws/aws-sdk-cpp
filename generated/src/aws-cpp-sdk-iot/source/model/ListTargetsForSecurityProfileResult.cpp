/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListTargetsForSecurityProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTargetsForSecurityProfileResult::ListTargetsForSecurityProfileResult()
{
}

ListTargetsForSecurityProfileResult::ListTargetsForSecurityProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTargetsForSecurityProfileResult& ListTargetsForSecurityProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("securityProfileTargets"))
  {
    Aws::Utils::Array<JsonView> securityProfileTargetsJsonList = jsonValue.GetArray("securityProfileTargets");
    for(unsigned securityProfileTargetsIndex = 0; securityProfileTargetsIndex < securityProfileTargetsJsonList.GetLength(); ++securityProfileTargetsIndex)
    {
      m_securityProfileTargets.push_back(securityProfileTargetsJsonList[securityProfileTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
