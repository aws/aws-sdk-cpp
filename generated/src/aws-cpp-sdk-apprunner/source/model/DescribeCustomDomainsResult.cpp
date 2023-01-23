/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DescribeCustomDomainsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomDomainsResult::DescribeCustomDomainsResult()
{
}

DescribeCustomDomainsResult::DescribeCustomDomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCustomDomainsResult& DescribeCustomDomainsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DNSTarget"))
  {
    m_dNSTarget = jsonValue.GetString("DNSTarget");

  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

  }

  if(jsonValue.ValueExists("CustomDomains"))
  {
    Aws::Utils::Array<JsonView> customDomainsJsonList = jsonValue.GetArray("CustomDomains");
    for(unsigned customDomainsIndex = 0; customDomainsIndex < customDomainsJsonList.GetLength(); ++customDomainsIndex)
    {
      m_customDomains.push_back(customDomainsJsonList[customDomainsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("VpcDNSTargets"))
  {
    Aws::Utils::Array<JsonView> vpcDNSTargetsJsonList = jsonValue.GetArray("VpcDNSTargets");
    for(unsigned vpcDNSTargetsIndex = 0; vpcDNSTargetsIndex < vpcDNSTargetsJsonList.GetLength(); ++vpcDNSTargetsIndex)
    {
      m_vpcDNSTargets.push_back(vpcDNSTargetsJsonList[vpcDNSTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
