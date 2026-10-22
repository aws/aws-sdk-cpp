/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/AssociateCollectorResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateCollectorResult::AssociateCollectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

AssociateCollectorResult& AssociateCollectorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("environmentId")) {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentArn")) {
    m_environmentArn = jsonValue.GetString("environmentArn");
    m_environmentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associatedCollector")) {
    m_associatedCollector = jsonValue.GetObject("associatedCollector");
    m_associatedCollectorHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
