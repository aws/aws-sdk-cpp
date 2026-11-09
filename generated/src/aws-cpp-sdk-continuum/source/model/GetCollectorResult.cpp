/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GetCollectorResult.h>
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

GetCollectorResult::GetCollectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCollectorResult& GetCollectorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("collectorId")) {
    m_collectorId = jsonValue.GetString("collectorId");
    m_collectorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectorArn")) {
    m_collectorArn = jsonValue.GetString("collectorArn");
    m_collectorArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = CollectorTypeMapper::GetCollectorTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CollectorStatusMapper::GetCollectorStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configRecorderArn")) {
    m_configRecorderArn = jsonValue.GetString("configRecorderArn");
    m_configRecorderArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("k8ClusterRole")) {
    m_kubernetesClusterRoleArn = jsonValue.GetString("k8ClusterRole");
    m_kubernetesClusterRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
