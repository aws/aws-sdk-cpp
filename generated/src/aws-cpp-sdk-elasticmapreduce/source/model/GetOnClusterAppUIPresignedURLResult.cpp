﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elasticmapreduce/model/GetOnClusterAppUIPresignedURLResult.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOnClusterAppUIPresignedURLResult::GetOnClusterAppUIPresignedURLResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetOnClusterAppUIPresignedURLResult& GetOnClusterAppUIPresignedURLResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("PresignedURLReady")) {
    m_presignedURLReady = jsonValue.GetBool("PresignedURLReady");
    m_presignedURLReadyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PresignedURL")) {
    m_presignedURL = jsonValue.GetString("PresignedURL");
    m_presignedURLHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
