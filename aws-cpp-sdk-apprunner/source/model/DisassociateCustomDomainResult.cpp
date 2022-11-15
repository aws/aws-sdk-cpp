/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/DisassociateCustomDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateCustomDomainResult::DisassociateCustomDomainResult()
{
}

DisassociateCustomDomainResult::DisassociateCustomDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateCustomDomainResult& DisassociateCustomDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("CustomDomain"))
  {
    m_customDomain = jsonValue.GetObject("CustomDomain");

  }

  if(jsonValue.ValueExists("VpcDNSTargets"))
  {
    Aws::Utils::Array<JsonView> vpcDNSTargetsJsonList = jsonValue.GetArray("VpcDNSTargets");
    for(unsigned vpcDNSTargetsIndex = 0; vpcDNSTargetsIndex < vpcDNSTargetsJsonList.GetLength(); ++vpcDNSTargetsIndex)
    {
      m_vpcDNSTargets.push_back(vpcDNSTargetsJsonList[vpcDNSTargetsIndex].AsObject());
    }
  }



  return *this;
}
