/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/GetBulkPublishDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBulkPublishDetailsResult::GetBulkPublishDetailsResult() : 
    m_bulkPublishStatus(BulkPublishStatus::NOT_SET)
{
}

GetBulkPublishDetailsResult::GetBulkPublishDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_bulkPublishStatus(BulkPublishStatus::NOT_SET)
{
  *this = result;
}

GetBulkPublishDetailsResult& GetBulkPublishDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

  }

  if(jsonValue.ValueExists("BulkPublishStartTime"))
  {
    m_bulkPublishStartTime = jsonValue.GetDouble("BulkPublishStartTime");

  }

  if(jsonValue.ValueExists("BulkPublishCompleteTime"))
  {
    m_bulkPublishCompleteTime = jsonValue.GetDouble("BulkPublishCompleteTime");

  }

  if(jsonValue.ValueExists("BulkPublishStatus"))
  {
    m_bulkPublishStatus = BulkPublishStatusMapper::GetBulkPublishStatusForName(jsonValue.GetString("BulkPublishStatus"));

  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

  }



  return *this;
}
