/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/UpdatePatchBaselineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePatchBaselineResult::UpdatePatchBaselineResult() : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesEnableNonSecurity(false),
    m_rejectedPatchesAction(PatchAction::NOT_SET)
{
}

UpdatePatchBaselineResult::UpdatePatchBaselineResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesEnableNonSecurity(false),
    m_rejectedPatchesAction(PatchAction::NOT_SET)
{
  *this = result;
}

UpdatePatchBaselineResult& UpdatePatchBaselineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaselineId"))
  {
    m_baselineId = jsonValue.GetString("BaselineId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

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
    Aws::Utils::Array<JsonView> approvedPatchesJsonList = jsonValue.GetArray("ApprovedPatches");
    for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
    {
      m_approvedPatches.push_back(approvedPatchesJsonList[approvedPatchesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ApprovedPatchesComplianceLevel"))
  {
    m_approvedPatchesComplianceLevel = PatchComplianceLevelMapper::GetPatchComplianceLevelForName(jsonValue.GetString("ApprovedPatchesComplianceLevel"));

  }

  if(jsonValue.ValueExists("ApprovedPatchesEnableNonSecurity"))
  {
    m_approvedPatchesEnableNonSecurity = jsonValue.GetBool("ApprovedPatchesEnableNonSecurity");

  }

  if(jsonValue.ValueExists("RejectedPatches"))
  {
    Aws::Utils::Array<JsonView> rejectedPatchesJsonList = jsonValue.GetArray("RejectedPatches");
    for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
    {
      m_rejectedPatches.push_back(rejectedPatchesJsonList[rejectedPatchesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("RejectedPatchesAction"))
  {
    m_rejectedPatchesAction = PatchActionMapper::GetPatchActionForName(jsonValue.GetString("RejectedPatchesAction"));

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

  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
  }



  return *this;
}
