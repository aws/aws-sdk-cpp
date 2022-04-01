﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/UpdateRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RecycleBin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRuleResult::UpdateRuleResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_status(RuleStatus::NOT_SET)
{
}

UpdateRuleResult::UpdateRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(ResourceType::NOT_SET),
    m_status(RuleStatus::NOT_SET)
{
  *this = result;
}

UpdateRuleResult& UpdateRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

  }

  if(jsonValue.ValueExists("RetentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetObject("RetentionPeriod");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

  }

  if(jsonValue.ValueExists("ResourceTags"))
  {
    Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("ResourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RuleStatusMapper::GetRuleStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
