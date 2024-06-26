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

GetIngressPointResult::GetIngressPointResult() : 
    m_status(IngressPointStatus::NOT_SET),
    m_type(IngressPointType::NOT_SET)
{
}

GetIngressPointResult::GetIngressPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetIngressPointResult()
{
  *this = result;
}

GetIngressPointResult& GetIngressPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ARecord"))
  {
    m_aRecord = jsonValue.GetString("ARecord");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("IngressPointArn"))
  {
    m_ingressPointArn = jsonValue.GetString("IngressPointArn");

  }

  if(jsonValue.ValueExists("IngressPointAuthConfiguration"))
  {
    m_ingressPointAuthConfiguration = jsonValue.GetObject("IngressPointAuthConfiguration");

  }

  if(jsonValue.ValueExists("IngressPointId"))
  {
    m_ingressPointId = jsonValue.GetString("IngressPointId");

  }

  if(jsonValue.ValueExists("IngressPointName"))
  {
    m_ingressPointName = jsonValue.GetString("IngressPointName");

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("RuleSetId"))
  {
    m_ruleSetId = jsonValue.GetString("RuleSetId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngressPointStatusMapper::GetIngressPointStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("TrafficPolicyId"))
  {
    m_trafficPolicyId = jsonValue.GetString("TrafficPolicyId");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = IngressPointTypeMapper::GetIngressPointTypeForName(jsonValue.GetString("Type"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
