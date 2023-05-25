/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationProposalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteDirectConnectGatewayAssociationProposalResult::DeleteDirectConnectGatewayAssociationProposalResult()
{
}

DeleteDirectConnectGatewayAssociationProposalResult::DeleteDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteDirectConnectGatewayAssociationProposalResult& DeleteDirectConnectGatewayAssociationProposalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAssociationProposal"))
  {
    m_directConnectGatewayAssociationProposal = jsonValue.GetObject("directConnectGatewayAssociationProposal");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
