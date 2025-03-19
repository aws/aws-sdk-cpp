/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeLocationSmbResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationSmbResult::DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationSmbResult& DescribeLocationSmbResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");
    m_locationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");
    m_locationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
    m_agentArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");
    m_userHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MountOptions"))
  {
    m_mountOptions = jsonValue.GetObject("MountOptions");
    m_mountOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsIpAddresses"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddressesJsonList = jsonValue.GetArray("DnsIpAddresses");
    for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
    {
      m_dnsIpAddresses.push_back(dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString());
    }
    m_dnsIpAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KerberosPrincipal"))
  {
    m_kerberosPrincipal = jsonValue.GetString("KerberosPrincipal");
    m_kerberosPrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = SmbAuthenticationTypeMapper::GetSmbAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
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
