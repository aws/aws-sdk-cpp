/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateProductPageResult.h>
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

CreateProductPageResult::CreateProductPageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateProductPageResult& CreateProductPageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("displayContent")) {
    m_displayContent = jsonValue.GetObject("displayContent");
    m_displayContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModified")) {
    m_lastModified = jsonValue.GetString("lastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageArn")) {
    m_productPageArn = jsonValue.GetString("productPageArn");
    m_productPageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productPageId")) {
    m_productPageId = jsonValue.GetString("productPageId");
    m_productPageIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
