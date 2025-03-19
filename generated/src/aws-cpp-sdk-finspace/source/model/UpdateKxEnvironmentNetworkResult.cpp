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

UpdateKxEnvironmentNetworkResult::UpdateKxEnvironmentNetworkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateKxEnvironmentNetworkResult& UpdateKxEnvironmentNetworkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tgwStatus"))
  {
    m_tgwStatus = TgwStatusMapper::GetTgwStatusForName(jsonValue.GetString("tgwStatus"));
    m_tgwStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnsStatus"))
  {
    m_dnsStatus = DnsStatusMapper::GetDnsStatusForName(jsonValue.GetString("dnsStatus"));
    m_dnsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");
    m_environmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dedicatedServiceAccountId"))
  {
    m_dedicatedServiceAccountId = jsonValue.GetString("dedicatedServiceAccountId");
    m_dedicatedServiceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transitGatewayConfiguration"))
  {
    m_transitGatewayConfiguration = jsonValue.GetObject("transitGatewayConfiguration");
    m_transitGatewayConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customDNSConfiguration"))
  {
    Aws::Utils::Array<JsonView> customDNSConfigurationJsonList = jsonValue.GetArray("customDNSConfiguration");
    for(unsigned customDNSConfigurationIndex = 0; customDNSConfigurationIndex < customDNSConfigurationJsonList.GetLength(); ++customDNSConfigurationIndex)
    {
      m_customDNSConfiguration.push_back(customDNSConfigurationJsonList[customDNSConfigurationIndex].AsObject());
    }
    m_customDNSConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");
    m_creationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTimestamp"))
  {
    m_updateTimestamp = jsonValue.GetDouble("updateTimestamp");
    m_updateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
    m_availabilityZoneIdsHasBeenSet = true;
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
