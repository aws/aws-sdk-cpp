/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetDataProtectionPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataProtectionPolicyResult::GetDataProtectionPolicyResult() : 
    m_lastUpdatedTime(0)
{
}

GetDataProtectionPolicyResult::GetDataProtectionPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lastUpdatedTime(0)
{
  *this = result;
}

GetDataProtectionPolicyResult& GetDataProtectionPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logGroupIdentifier"))
  {
    m_logGroupIdentifier = jsonValue.GetString("logGroupIdentifier");

  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");

  }



  return *this;
}
