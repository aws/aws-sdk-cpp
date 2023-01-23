/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetProtectionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProtectionStatusResult::GetProtectionStatusResult() : 
    m_serviceType(SecurityServiceType::NOT_SET)
{
}

GetProtectionStatusResult::GetProtectionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_serviceType(SecurityServiceType::NOT_SET)
{
  *this = result;
}

GetProtectionStatusResult& GetProtectionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdminAccountId"))
  {
    m_adminAccountId = jsonValue.GetString("AdminAccountId");

  }

  if(jsonValue.ValueExists("ServiceType"))
  {
    m_serviceType = SecurityServiceTypeMapper::GetSecurityServiceTypeForName(jsonValue.GetString("ServiceType"));

  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
