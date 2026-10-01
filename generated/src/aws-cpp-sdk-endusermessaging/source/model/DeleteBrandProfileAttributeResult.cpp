/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/endusermessaging/model/DeleteBrandProfileAttributeResult.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteBrandProfileAttributeResult::DeleteBrandProfileAttributeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DeleteBrandProfileAttributeResult& DeleteBrandProfileAttributeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("brandProfileId")) {
    m_brandProfileId = jsonValue.GetString("brandProfileId");
    m_brandProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributeName")) {
    m_attributeName = jsonValue.GetString("attributeName");
    m_attributeNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
