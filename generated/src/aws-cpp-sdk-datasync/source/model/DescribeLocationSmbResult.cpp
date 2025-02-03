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

DescribeLocationSmbResult::DescribeLocationSmbResult() : 
    m_authenticationType(SmbAuthenticationType::NOT_SET)
{
}

DescribeLocationSmbResult::DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeLocationSmbResult()
{
  *this = result;
}

DescribeLocationSmbResult& DescribeLocationSmbResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("AgentArns"))
  {
    Aws::Utils::Array<JsonView> agentArnsJsonList = jsonValue.GetArray("AgentArns");
    for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
    {
      m_agentArns.push_back(agentArnsJsonList[agentArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

  }

  if(jsonValue.ValueExists("MountOptions"))
  {
    m_mountOptions = jsonValue.GetObject("MountOptions");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("DnsIpAddresses"))
  {
    Aws::Utils::Array<JsonView> dnsIpAddressesJsonList = jsonValue.GetArray("DnsIpAddresses");
    for(unsigned dnsIpAddressesIndex = 0; dnsIpAddressesIndex < dnsIpAddressesJsonList.GetLength(); ++dnsIpAddressesIndex)
    {
      m_dnsIpAddresses.push_back(dnsIpAddressesJsonList[dnsIpAddressesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("KerberosPrincipal"))
  {
    m_kerberosPrincipal = jsonValue.GetString("KerberosPrincipal");

  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = SmbAuthenticationTypeMapper::GetSmbAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
