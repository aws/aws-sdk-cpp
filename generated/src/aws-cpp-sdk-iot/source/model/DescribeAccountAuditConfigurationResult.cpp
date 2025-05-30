﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeAccountAuditConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAuditConfigurationResult::DescribeAccountAuditConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountAuditConfigurationResult& DescribeAccountAuditConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("auditNotificationTargetConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> auditNotificationTargetConfigurationsJsonMap = jsonValue.GetObject("auditNotificationTargetConfigurations").GetAllObjects();
    for(auto& auditNotificationTargetConfigurationsItem : auditNotificationTargetConfigurationsJsonMap)
    {
      m_auditNotificationTargetConfigurations[AuditNotificationTypeMapper::GetAuditNotificationTypeForName(auditNotificationTargetConfigurationsItem.first)] = auditNotificationTargetConfigurationsItem.second.AsObject();
    }
    m_auditNotificationTargetConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("auditCheckConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> auditCheckConfigurationsJsonMap = jsonValue.GetObject("auditCheckConfigurations").GetAllObjects();
    for(auto& auditCheckConfigurationsItem : auditCheckConfigurationsJsonMap)
    {
      m_auditCheckConfigurations[auditCheckConfigurationsItem.first] = auditCheckConfigurationsItem.second.AsObject();
    }
    m_auditCheckConfigurationsHasBeenSet = true;
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
