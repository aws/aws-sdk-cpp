/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/RunMicrovmResult.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RunMicrovmResult::RunMicrovmResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RunMicrovmResult& RunMicrovmResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("microvmId")) {
    m_microvmId = jsonValue.GetString("microvmId");
    m_microvmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = MicrovmStateMapper::GetMicrovmStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionRoleArn")) {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idlePolicy")) {
    m_idlePolicy = jsonValue.GetObject("idlePolicy");
    m_idlePolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumDurationInSeconds")) {
    m_maximumDurationInSeconds = jsonValue.GetInteger("maximumDurationInSeconds");
    m_maximumDurationInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("terminatedAt")) {
    m_terminatedAt = jsonValue.GetDouble("terminatedAt");
    m_terminatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ingressNetworkConnectors")) {
    Aws::Utils::Array<JsonView> ingressNetworkConnectorsJsonList = jsonValue.GetArray("ingressNetworkConnectors");
    for (unsigned ingressNetworkConnectorsIndex = 0; ingressNetworkConnectorsIndex < ingressNetworkConnectorsJsonList.GetLength();
         ++ingressNetworkConnectorsIndex) {
      m_ingressNetworkConnectors.push_back(ingressNetworkConnectorsJsonList[ingressNetworkConnectorsIndex].AsString());
    }
    m_ingressNetworkConnectorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("egressNetworkConnectors")) {
    Aws::Utils::Array<JsonView> egressNetworkConnectorsJsonList = jsonValue.GetArray("egressNetworkConnectors");
    for (unsigned egressNetworkConnectorsIndex = 0; egressNetworkConnectorsIndex < egressNetworkConnectorsJsonList.GetLength();
         ++egressNetworkConnectorsIndex) {
      m_egressNetworkConnectors.push_back(egressNetworkConnectorsJsonList[egressNetworkConnectorsIndex].AsString());
    }
    m_egressNetworkConnectorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
