﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dsql/model/GetClusterResult.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetClusterResult::GetClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetClusterResult& GetClusterResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("multiRegionProperties")) {
    m_multiRegionProperties = jsonValue.GetObject("multiRegionProperties");
    m_multiRegionPropertiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionDetails")) {
    m_encryptionDetails = jsonValue.GetObject("encryptionDetails");
    m_encryptionDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
