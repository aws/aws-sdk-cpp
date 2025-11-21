/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateProductRestEndpointPageResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProductRestEndpointPageResult::CreateProductRestEndpointPageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

CreateProductRestEndpointPageResult& CreateProductRestEndpointPageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("displayContent")) {
    m_displayContent = jsonValue.GetObject("displayContent");
    m_displayContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productRestEndpointPageArn")) {
    m_productRestEndpointPageArn = jsonValue.GetString("productRestEndpointPageArn");
    m_productRestEndpointPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productRestEndpointPageId")) {
    m_productRestEndpointPageId = jsonValue.GetString("productRestEndpointPageId");
    m_productRestEndpointPageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restEndpointIdentifier")) {
    m_restEndpointIdentifier = jsonValue.GetObject("restEndpointIdentifier");
    m_restEndpointIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusException")) {
    m_statusException = jsonValue.GetObject("statusException");
    m_statusExceptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tryItState")) {
    m_tryItState = TryItStateMapper::GetTryItStateForName(jsonValue.GetString("tryItState"));
    m_tryItStateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
