/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateIAMPolicyAssignmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateIAMPolicyAssignmentResult::UpdateIAMPolicyAssignmentResult() : 
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_status(0)
{
}

UpdateIAMPolicyAssignmentResult::UpdateIAMPolicyAssignmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_status(0)
{
  *this = result;
}

UpdateIAMPolicyAssignmentResult& UpdateIAMPolicyAssignmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssignmentName"))
  {
    m_assignmentName = jsonValue.GetString("AssignmentName");

  }

  if(jsonValue.ValueExists("AssignmentId"))
  {
    m_assignmentId = jsonValue.GetString("AssignmentId");

  }

  if(jsonValue.ValueExists("PolicyArn"))
  {
    m_policyArn = jsonValue.GetString("PolicyArn");

  }

  if(jsonValue.ValueExists("Identities"))
  {
    Aws::Map<Aws::String, JsonView> identitiesJsonMap = jsonValue.GetObject("Identities").GetAllObjects();
    for(auto& identitiesItem : identitiesJsonMap)
    {
      Aws::Utils::Array<JsonView> identityNameListJsonList = identitiesItem.second.AsArray();
      Aws::Vector<Aws::String> identityNameListList;
      identityNameListList.reserve((size_t)identityNameListJsonList.GetLength());
      for(unsigned identityNameListIndex = 0; identityNameListIndex < identityNameListJsonList.GetLength(); ++identityNameListIndex)
      {
        identityNameListList.push_back(identityNameListJsonList[identityNameListIndex].AsString());
      }
      m_identities[identitiesItem.first] = std::move(identityNameListList);
    }
  }

  if(jsonValue.ValueExists("AssignmentStatus"))
  {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));

  }

  if(jsonValue.ValueExists("RequestId"))
  {
    m_requestId = jsonValue.GetString("RequestId");

  }



  m_status = static_cast<int>(result.GetResponseCode());

  return *this;
}
