/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AssociateThirdPartyFirewallResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateThirdPartyFirewallResult::AssociateThirdPartyFirewallResult() : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET)
{
}

AssociateThirdPartyFirewallResult::AssociateThirdPartyFirewallResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_thirdPartyFirewallStatus(ThirdPartyFirewallAssociationStatus::NOT_SET)
{
  *this = result;
}

AssociateThirdPartyFirewallResult& AssociateThirdPartyFirewallResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ThirdPartyFirewallStatus"))
  {
    m_thirdPartyFirewallStatus = ThirdPartyFirewallAssociationStatusMapper::GetThirdPartyFirewallAssociationStatusForName(jsonValue.GetString("ThirdPartyFirewallStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
