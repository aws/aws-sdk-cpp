/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxEnvironmentNetworkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateKxEnvironmentNetworkResult::UpdateKxEnvironmentNetworkResult() : 
    m_status(EnvironmentStatus::NOT_SET),
    m_tgwStatus(TgwStatus::NOT_SET),
    m_dnsStatus(DnsStatus::NOT_SET)
{
}

UpdateKxEnvironmentNetworkResult::UpdateKxEnvironmentNetworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EnvironmentStatus::NOT_SET),
    m_tgwStatus(TgwStatus::NOT_SET),
    m_dnsStatus(DnsStatus::NOT_SET)
{
  *this = result;
}

UpdateKxEnvironmentNetworkResult& UpdateKxEnvironmentNetworkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("tgwStatus"))
  {
    m_tgwStatus = TgwStatusMapper::GetTgwStatusForName(jsonValue.GetString("tgwStatus"));

  }

  if(jsonValue.ValueExists("dnsStatus"))
  {
    m_dnsStatus = DnsStatusMapper::GetDnsStatusForName(jsonValue.GetString("dnsStatus"));

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");

  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

  }

  if(jsonValue.ValueExists("dedicatedServiceAccountId"))
  {
    m_dedicatedServiceAccountId = jsonValue.GetString("dedicatedServiceAccountId");

  }

  if(jsonValue.ValueExists("transitGatewayConfiguration"))
  {
    m_transitGatewayConfiguration = jsonValue.GetObject("transitGatewayConfiguration");

  }

  if(jsonValue.ValueExists("customDNSConfiguration"))
  {
    Aws::Utils::Array<JsonView> customDNSConfigurationJsonList = jsonValue.GetArray("customDNSConfiguration");
    for(unsigned customDNSConfigurationIndex = 0; customDNSConfigurationIndex < customDNSConfigurationJsonList.GetLength(); ++customDNSConfigurationIndex)
    {
      m_customDNSConfiguration.push_back(customDNSConfigurationJsonList[customDNSConfigurationIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

  }

  if(jsonValue.ValueExists("updateTimestamp"))
  {
    m_updateTimestamp = jsonValue.GetDouble("updateTimestamp");

  }

  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
