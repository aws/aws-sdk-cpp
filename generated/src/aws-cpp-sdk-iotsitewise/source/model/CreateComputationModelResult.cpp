﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/CreateComputationModelResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateComputationModelResult::CreateComputationModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateComputationModelResult& CreateComputationModelResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("computationModelId")) {
    m_computationModelId = jsonValue.GetString("computationModelId");
    m_computationModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computationModelArn")) {
    m_computationModelArn = jsonValue.GetString("computationModelArn");
    m_computationModelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("computationModelStatus")) {
    m_computationModelStatus = jsonValue.GetObject("computationModelStatus");
    m_computationModelStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
