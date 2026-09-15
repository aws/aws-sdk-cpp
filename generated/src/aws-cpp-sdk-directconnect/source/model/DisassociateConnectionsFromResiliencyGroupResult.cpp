/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/directconnect/model/DisassociateConnectionsFromResiliencyGroupResult.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateConnectionsFromResiliencyGroupResult::DisassociateConnectionsFromResiliencyGroupResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DisassociateConnectionsFromResiliencyGroupResult& DisassociateConnectionsFromResiliencyGroupResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("resiliencyGroupAssociations")) {
    Aws::Utils::Array<JsonView> resiliencyGroupAssociationsJsonList = jsonValue.GetArray("resiliencyGroupAssociations");
    for (unsigned resiliencyGroupAssociationsIndex = 0; resiliencyGroupAssociationsIndex < resiliencyGroupAssociationsJsonList.GetLength();
         ++resiliencyGroupAssociationsIndex) {
      m_resiliencyGroupAssociations.push_back(resiliencyGroupAssociationsJsonList[resiliencyGroupAssociationsIndex].AsObject());
    }
    m_resiliencyGroupAssociationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
