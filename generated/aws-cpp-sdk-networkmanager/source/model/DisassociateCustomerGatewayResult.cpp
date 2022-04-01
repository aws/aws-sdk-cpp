﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/DisassociateCustomerGatewayResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateCustomerGatewayResult::DisassociateCustomerGatewayResult()
{
}

DisassociateCustomerGatewayResult::DisassociateCustomerGatewayResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisassociateCustomerGatewayResult& DisassociateCustomerGatewayResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomerGatewayAssociation"))
  {
    m_customerGatewayAssociation = jsonValue.GetObject("CustomerGatewayAssociation");

  }



  return *this;
}
