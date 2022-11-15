/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetClientCertificatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetClientCertificatesResult::GetClientCertificatesResult()
{
}

GetClientCertificatesResult::GetClientCertificatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetClientCertificatesResult& GetClientCertificatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("position"))
  {
    m_position = jsonValue.GetString("position");

  }

  if(jsonValue.ValueExists("item"))
  {
    Aws::Utils::Array<JsonView> itemJsonList = jsonValue.GetArray("item");
    for(unsigned itemIndex = 0; itemIndex < itemJsonList.GetLength(); ++itemIndex)
    {
      m_items.push_back(itemJsonList[itemIndex].AsObject());
    }
  }



  return *this;
}
