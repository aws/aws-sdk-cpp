/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kinesisanalyticsv2/model/CreateSnapshotResult.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSnapshotResult::CreateSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateSnapshotResult& CreateSnapshotResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SnapshotArn")) {
    m_snapshotArn = jsonValue.GetString("SnapshotArn");
    m_snapshotArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotStatus")) {
    m_snapshotStatus = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("SnapshotStatus"));
    m_snapshotStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperationId")) {
    m_snapshotOperationId = jsonValue.GetString("SnapshotOperationId");
    m_snapshotOperationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SnapshotOperationStatus")) {
    m_snapshotOperationStatus =
        SnapshotOperationStatusMapper::GetSnapshotOperationStatusForName(jsonValue.GetString("SnapshotOperationStatus"));
    m_snapshotOperationStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
