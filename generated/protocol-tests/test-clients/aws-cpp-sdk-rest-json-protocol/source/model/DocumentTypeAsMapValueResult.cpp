/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DocumentTypeAsMapValueResult::DocumentTypeAsMapValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DocumentTypeAsMapValueResult& DocumentTypeAsMapValueResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("docValuedMap")) {
    Aws::Map<Aws::String, JsonView> docValuedMapJsonMap = jsonValue.GetObject("docValuedMap").GetAllObjects();
    for (auto& docValuedMapItem : docValuedMapJsonMap) {
      m_docValuedMap[docValuedMapItem.first] = docValuedMapItem.second.AsObject();
    }
    m_docValuedMapHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
