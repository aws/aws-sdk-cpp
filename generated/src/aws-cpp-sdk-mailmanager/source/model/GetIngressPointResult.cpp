/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetIngressPointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIngressPointResult::GetIngressPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIngressPointResult& GetIngressPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");
    m_ingressPointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointName"))
  {
    m_ingressPointName = jsonValue.GetString("IngressPointName");
    m_ingressPointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointArn"))
  {
    m_ingressPointArn = jsonValue.GetString("IngressPointArn");
    m_ingressPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngressPointStatusMapper::GetIngressPointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IngressPointTypeMapper::GetIngressPointTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ARecord"))
  {
    m_aRecord = jsonValue.GetString("ARecord");
    m_aRecordHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleSetId"))
  {
    m_ruleSetId = jsonValue.GetString("RuleSetId");
    m_ruleSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");
    m_trafficPolicyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngressPointAuthConfiguration"))
  {
    m_ingressPointAuthConfiguration = jsonValue.GetObject("IngressPointAuthConfiguration");
    m_ingressPointAuthConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");
    m_networkConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");
    m_lastUpdatedTimestampHasBeenSet = true;
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
