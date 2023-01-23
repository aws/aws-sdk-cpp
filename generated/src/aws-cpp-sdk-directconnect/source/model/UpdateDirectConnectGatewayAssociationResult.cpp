/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDirectConnectGatewayAssociationResult::UpdateDirectConnectGatewayAssociationResult()
{
}

UpdateDirectConnectGatewayAssociationResult::UpdateDirectConnectGatewayAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateDirectConnectGatewayAssociationResult& UpdateDirectConnectGatewayAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAssociation"))
  {
    m_directConnectGatewayAssociation = jsonValue.GetObject("directConnectGatewayAssociation");

  }



  return *this;
}
