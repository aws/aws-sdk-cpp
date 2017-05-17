/*
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

#include <aws/ssm/model/UpdatePatchBaselineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePatchBaselineResult::UpdatePatchBaselineResult()
{
}

UpdatePatchBaselineResult::UpdatePatchBaselineResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePatchBaselineResult& UpdatePatchBaselineResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("GlobalFilters"))
  {
    m_globalFilters = jsonValue.GetObject("GlobalFilters");

  }

  if(jsonValue.ValueExists("ApprovalRules"))
  {
    m_approvalRules = jsonValue.GetObject("ApprovalRules");

  }

  if(jsonValue.ValueExists("ApprovedPatches"))
  {
    Array<JsonValue> approvedPatchesJsonList = jsonValue.GetArray("ApprovedPatches");
    for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
    {
      m_approvedPatches.push_back(approvedPatchesJsonList[approvedPatchesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("RejectedPatches"))
  {
    Array<JsonValue> rejectedPatchesJsonList = jsonValue.GetArray("RejectedPatches");
    for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
    {
      m_rejectedPatches.push_back(rejectedPatchesJsonList[rejectedPatchesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("ModifiedDate"))
  {
    m_modifiedDate = jsonValue.GetDouble("ModifiedDate");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }



  return *this;
}
