/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetCustomerGatewayAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCustomerGatewayAssociationsResult::GetCustomerGatewayAssociationsResult()
{
}

GetCustomerGatewayAssociationsResult::GetCustomerGatewayAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCustomerGatewayAssociationsResult& GetCustomerGatewayAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomerGatewayAssociations"))
  {
    Aws::Utils::Array<JsonView> customerGatewayAssociationsJsonList = jsonValue.GetArray("CustomerGatewayAssociations");
    for(unsigned customerGatewayAssociationsIndex = 0; customerGatewayAssociationsIndex < customerGatewayAssociationsJsonList.GetLength(); ++customerGatewayAssociationsIndex)
    {
      m_customerGatewayAssociations.push_back(customerGatewayAssociationsJsonList[customerGatewayAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
