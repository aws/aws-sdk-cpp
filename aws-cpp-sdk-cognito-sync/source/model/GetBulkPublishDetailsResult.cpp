﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
