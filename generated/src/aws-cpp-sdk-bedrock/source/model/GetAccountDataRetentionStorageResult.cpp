/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAccountDataRetentionStorageResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountDataRetentionStorageResult::GetAccountDataRetentionStorageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAccountDataRetentionStorageResult& GetAccountDataRetentionStorageResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("scope")) {
    m_scope = DataRetentionStorageScopeMapper::GetDataRetentionStorageScopeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelProvider")) {
    m_modelProvider =
        DataRetentionStorageModelProviderMapper::GetDataRetentionStorageModelProviderForName(jsonValue.GetString("modelProvider"));
    m_modelProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageDestination")) {
    m_storageDestination =
        DataRetentionStorageDestinationMapper::GetDataRetentionStorageDestinationForName(jsonValue.GetString("storageDestination"));
    m_storageDestinationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageConfiguration")) {
    m_storageConfiguration = jsonValue.GetObject("storageConfiguration");
    m_storageConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyStatus")) {
    m_kmsKeyStatus =
        DataRetentionStorageResourceStatusMapper::GetDataRetentionStorageResourceStatusForName(jsonValue.GetString("kmsKeyStatus"));
    m_kmsKeyStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3BucketStatus")) {
    m_s3BucketStatus =
        DataRetentionStorageResourceStatusMapper::GetDataRetentionStorageResourceStatusForName(jsonValue.GetString("s3BucketStatus"));
    m_s3BucketStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
