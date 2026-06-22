/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-microvms/model/GetMicrovmImageBuildResult.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMicrovmImageBuildResult::GetMicrovmImageBuildResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetMicrovmImageBuildResult& GetMicrovmImageBuildResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("imageArn")) {
    m_imageArn = jsonValue.GetString("imageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildId")) {
    m_buildId = jsonValue.GetString("buildId");
    m_buildIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buildState")) {
    m_buildState = BuildStateMapper::GetBuildStateForName(jsonValue.GetString("buildState"));
    m_buildStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("architecture")) {
    m_architecture = ArchitectureMapper::GetArchitectureForName(jsonValue.GetString("architecture"));
    m_architectureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chipset")) {
    m_chipset = ChipsetMapper::GetChipsetForName(jsonValue.GetString("chipset"));
    m_chipsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chipsetGeneration")) {
    m_chipsetGeneration = jsonValue.GetString("chipsetGeneration");
    m_chipsetGenerationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stateReason")) {
    m_stateReason = jsonValue.GetString("stateReason");
    m_stateReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("snapshotBuild")) {
    m_snapshotBuild = jsonValue.GetObject("snapshotBuild");
    m_snapshotBuildHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
