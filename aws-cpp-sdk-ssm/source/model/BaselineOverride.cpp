/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/BaselineOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

BaselineOverride::BaselineOverride() : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_globalFiltersHasBeenSet(false),
    m_approvalRulesHasBeenSet(false),
    m_approvedPatchesHasBeenSet(false),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesComplianceLevelHasBeenSet(false),
    m_rejectedPatchesHasBeenSet(false),
    m_rejectedPatchesAction(PatchAction::NOT_SET),
    m_rejectedPatchesActionHasBeenSet(false),
    m_approvedPatchesEnableNonSecurity(false),
    m_approvedPatchesEnableNonSecurityHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

BaselineOverride::BaselineOverride(JsonView jsonValue) : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_globalFiltersHasBeenSet(false),
    m_approvalRulesHasBeenSet(false),
    m_approvedPatchesHasBeenSet(false),
    m_approvedPatchesComplianceLevel(PatchComplianceLevel::NOT_SET),
    m_approvedPatchesComplianceLevelHasBeenSet(false),
    m_rejectedPatchesHasBeenSet(false),
    m_rejectedPatchesAction(PatchAction::NOT_SET),
    m_rejectedPatchesActionHasBeenSet(false),
    m_approvedPatchesEnableNonSecurity(false),
    m_approvedPatchesEnableNonSecurityHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

BaselineOverride& BaselineOverride::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = OperatingSystemMapper::GetOperatingSystemForName(jsonValue.GetString("OperatingSystem"));

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlobalFilters"))
  {
    m_globalFilters = jsonValue.GetObject("GlobalFilters");

    m_globalFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovalRules"))
  {
    m_approvalRules = jsonValue.GetObject("ApprovalRules");

    m_approvalRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedPatches"))
  {
    Aws::Utils::Array<JsonView> approvedPatchesJsonList = jsonValue.GetArray("ApprovedPatches");
    for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
    {
      m_approvedPatches.push_back(approvedPatchesJsonList[approvedPatchesIndex].AsString());
    }
    m_approvedPatchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedPatchesComplianceLevel"))
  {
    m_approvedPatchesComplianceLevel = PatchComplianceLevelMapper::GetPatchComplianceLevelForName(jsonValue.GetString("ApprovedPatchesComplianceLevel"));

    m_approvedPatchesComplianceLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RejectedPatches"))
  {
    Aws::Utils::Array<JsonView> rejectedPatchesJsonList = jsonValue.GetArray("RejectedPatches");
    for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
    {
      m_rejectedPatches.push_back(rejectedPatchesJsonList[rejectedPatchesIndex].AsString());
    }
    m_rejectedPatchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RejectedPatchesAction"))
  {
    m_rejectedPatchesAction = PatchActionMapper::GetPatchActionForName(jsonValue.GetString("RejectedPatchesAction"));

    m_rejectedPatchesActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedPatchesEnableNonSecurity"))
  {
    m_approvedPatchesEnableNonSecurity = jsonValue.GetBool("ApprovedPatchesEnableNonSecurity");

    m_approvedPatchesEnableNonSecurityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("Sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue BaselineOverride::Jsonize() const
{
  JsonValue payload;

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_globalFiltersHasBeenSet)
  {
   payload.WithObject("GlobalFilters", m_globalFilters.Jsonize());

  }

  if(m_approvalRulesHasBeenSet)
  {
   payload.WithObject("ApprovalRules", m_approvalRules.Jsonize());

  }

  if(m_approvedPatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approvedPatchesJsonList(m_approvedPatches.size());
   for(unsigned approvedPatchesIndex = 0; approvedPatchesIndex < approvedPatchesJsonList.GetLength(); ++approvedPatchesIndex)
   {
     approvedPatchesJsonList[approvedPatchesIndex].AsString(m_approvedPatches[approvedPatchesIndex]);
   }
   payload.WithArray("ApprovedPatches", std::move(approvedPatchesJsonList));

  }

  if(m_approvedPatchesComplianceLevelHasBeenSet)
  {
   payload.WithString("ApprovedPatchesComplianceLevel", PatchComplianceLevelMapper::GetNameForPatchComplianceLevel(m_approvedPatchesComplianceLevel));
  }

  if(m_rejectedPatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rejectedPatchesJsonList(m_rejectedPatches.size());
   for(unsigned rejectedPatchesIndex = 0; rejectedPatchesIndex < rejectedPatchesJsonList.GetLength(); ++rejectedPatchesIndex)
   {
     rejectedPatchesJsonList[rejectedPatchesIndex].AsString(m_rejectedPatches[rejectedPatchesIndex]);
   }
   payload.WithArray("RejectedPatches", std::move(rejectedPatchesJsonList));

  }

  if(m_rejectedPatchesActionHasBeenSet)
  {
   payload.WithString("RejectedPatchesAction", PatchActionMapper::GetNameForPatchAction(m_rejectedPatchesAction));
  }

  if(m_approvedPatchesEnableNonSecurityHasBeenSet)
  {
   payload.WithBool("ApprovedPatchesEnableNonSecurity", m_approvedPatchesEnableNonSecurity);

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("Sources", std::move(sourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
