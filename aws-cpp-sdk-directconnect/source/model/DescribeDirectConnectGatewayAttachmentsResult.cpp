/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeDirectConnectGatewayAttachmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDirectConnectGatewayAttachmentsResult::DescribeDirectConnectGatewayAttachmentsResult()
{
}

DescribeDirectConnectGatewayAttachmentsResult::DescribeDirectConnectGatewayAttachmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDirectConnectGatewayAttachmentsResult& DescribeDirectConnectGatewayAttachmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("directConnectGatewayAttachments"))
  {
    Aws::Utils::Array<JsonView> directConnectGatewayAttachmentsJsonList = jsonValue.GetArray("directConnectGatewayAttachments");
    for(unsigned directConnectGatewayAttachmentsIndex = 0; directConnectGatewayAttachmentsIndex < directConnectGatewayAttachmentsJsonList.GetLength(); ++directConnectGatewayAttachmentsIndex)
    {
      m_directConnectGatewayAttachments.push_back(directConnectGatewayAttachmentsJsonList[directConnectGatewayAttachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
