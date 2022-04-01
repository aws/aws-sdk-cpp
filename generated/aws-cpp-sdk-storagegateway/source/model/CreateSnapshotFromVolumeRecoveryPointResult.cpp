/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CreateSnapshotFromVolumeRecoveryPointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSnapshotFromVolumeRecoveryPointResult::CreateSnapshotFromVolumeRecoveryPointResult()
{
}

CreateSnapshotFromVolumeRecoveryPointResult::CreateSnapshotFromVolumeRecoveryPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateSnapshotFromVolumeRecoveryPointResult& CreateSnapshotFromVolumeRecoveryPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

  }

  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

  }

  if(jsonValue.ValueExists("VolumeRecoveryPointTime"))
  {
    m_volumeRecoveryPointTime = jsonValue.GetString("VolumeRecoveryPointTime");

  }



  return *this;
}
