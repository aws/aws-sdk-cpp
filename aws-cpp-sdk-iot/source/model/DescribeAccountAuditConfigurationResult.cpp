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

#include <aws/iot/model/DescribeAccountAuditConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAuditConfigurationResult::DescribeAccountAuditConfigurationResult()
{
}

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

  }

  if(jsonValue.ValueExists("auditNotificationTargetConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> auditNotificationTargetConfigurationsJsonMap = jsonValue.GetObject("auditNotificationTargetConfigurations").GetAllObjects();
    for(auto& auditNotificationTargetConfigurationsItem : auditNotificationTargetConfigurationsJsonMap)
    {
      m_auditNotificationTargetConfigurations[AuditNotificationTypeMapper::GetAuditNotificationTypeForName(auditNotificationTargetConfigurationsItem.first)] = auditNotificationTargetConfigurationsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("auditCheckConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> auditCheckConfigurationsJsonMap = jsonValue.GetObject("auditCheckConfigurations").GetAllObjects();
    for(auto& auditCheckConfigurationsItem : auditCheckConfigurationsJsonMap)
    {
      m_auditCheckConfigurations[auditCheckConfigurationsItem.first] = auditCheckConfigurationsItem.second.AsObject();
    }
  }



  return *this;
}
