/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationProposalResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDirectConnectGatewayAssociationProposalResult::CreateDirectConnectGatewayAssociationProposalResult()
{
}

CreateDirectConnectGatewayAssociationProposalResult::CreateDirectConnectGatewayAssociationProposalResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDirectConnectGatewayAssociationProposalResult& CreateDirectConnectGatewayAssociationProposalResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAssociationProposal"))
  {
    m_directConnectGatewayAssociationProposal = jsonValue.GetObject("directConnectGatewayAssociationProposal");

  }



  return *this;
}
