/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/GetBulkPublishDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBulkPublishDetailsResult::GetBulkPublishDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBulkPublishDetailsResult& GetBulkPublishDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");
    m_identityPoolIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BulkPublishStartTime"))
  {
    m_bulkPublishStartTime = jsonValue.GetDouble("BulkPublishStartTime");
    m_bulkPublishStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BulkPublishCompleteTime"))
  {
    m_bulkPublishCompleteTime = jsonValue.GetDouble("BulkPublishCompleteTime");
    m_bulkPublishCompleteTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BulkPublishStatus"))
  {
    m_bulkPublishStatus = BulkPublishStatusMapper::GetBulkPublishStatusForName(jsonValue.GetString("BulkPublishStatus"));
    m_bulkPublishStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
