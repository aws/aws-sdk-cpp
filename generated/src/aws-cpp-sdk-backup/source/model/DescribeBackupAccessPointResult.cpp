/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeBackupAccessPointResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBackupAccessPointResult::DescribeBackupAccessPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeBackupAccessPointResult& DescribeBackupAccessPointResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AccessPointArn")) {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessPointMetadata")) {
    Aws::Map<Aws::String, JsonView> accessPointMetadataJsonMap = jsonValue.GetObject("AccessPointMetadata").GetAllObjects();
    for (auto& accessPointMetadataItem : accessPointMetadataJsonMap) {
      m_accessPointMetadata[accessPointMetadataItem.first] = accessPointMetadataItem.second.AsString();
    }
    m_accessPointMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultArn")) {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecoveryPointArn")) {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AccessPointStatusMapper::GetAccessPointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
