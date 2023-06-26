/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchGetMemberEc2DeepInspectionStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetMemberEc2DeepInspectionStatusResult::BatchGetMemberEc2DeepInspectionStatusResult()
{
}

BatchGetMemberEc2DeepInspectionStatusResult::BatchGetMemberEc2DeepInspectionStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetMemberEc2DeepInspectionStatusResult& BatchGetMemberEc2DeepInspectionStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedAccountIds"))
  {
    Aws::Utils::Array<JsonView> failedAccountIdsJsonList = jsonValue.GetArray("failedAccountIds");
    for(unsigned failedAccountIdsIndex = 0; failedAccountIdsIndex < failedAccountIdsJsonList.GetLength(); ++failedAccountIdsIndex)
    {
      m_failedAccountIds.push_back(failedAccountIdsJsonList[failedAccountIdsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
