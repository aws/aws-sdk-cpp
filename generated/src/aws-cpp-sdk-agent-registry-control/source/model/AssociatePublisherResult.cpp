/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/AssociatePublisherResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociatePublisherResult::AssociatePublisherResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

AssociatePublisherResult& AssociatePublisherResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("recordArn")) {
    m_recordArn = jsonValue.GetString("recordArn");
    m_recordArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publicIdentifier")) {
    m_publicIdentifier = jsonValue.GetString("publicIdentifier");
    m_publicIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publisher")) {
    m_publisher = jsonValue.GetString("publisher");
    m_publisherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
