/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dsql/model/GetStreamResult.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamResult::GetStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetStreamResult& GetStreamResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("clusterIdentifier")) {
    m_clusterIdentifier = jsonValue.GetString("clusterIdentifier");
    m_clusterIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamIdentifier")) {
    m_streamIdentifier = jsonValue.GetString("streamIdentifier");
    m_streamIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StreamStatusMapper::GetStreamStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ordering")) {
    m_ordering = StreamOrderingMapper::GetStreamOrderingForName(jsonValue.GetString("ordering"));
    m_orderingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("format")) {
    m_format = StreamFormatMapper::GetStreamFormatForName(jsonValue.GetString("format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetDefinition")) {
    m_targetDefinition = jsonValue.GetObject("targetDefinition");
    m_targetDefinitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetObject("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
