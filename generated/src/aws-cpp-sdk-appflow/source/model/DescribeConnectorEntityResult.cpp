/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorEntityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectorEntityResult::DescribeConnectorEntityResult()
{
}

DescribeConnectorEntityResult::DescribeConnectorEntityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectorEntityResult& DescribeConnectorEntityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorEntityFields"))
  {
    Aws::Utils::Array<JsonView> connectorEntityFieldsJsonList = jsonValue.GetArray("connectorEntityFields");
    for(unsigned connectorEntityFieldsIndex = 0; connectorEntityFieldsIndex < connectorEntityFieldsJsonList.GetLength(); ++connectorEntityFieldsIndex)
    {
      m_connectorEntityFields.push_back(connectorEntityFieldsJsonList[connectorEntityFieldsIndex].AsObject());
    }
  }



  return *this;
}
