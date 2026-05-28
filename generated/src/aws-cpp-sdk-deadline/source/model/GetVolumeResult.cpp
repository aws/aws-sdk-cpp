/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/deadline/model/GetVolumeResult.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetVolumeResult::GetVolumeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetVolumeResult& GetVolumeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("volumeId")) {
    m_volumeId = jsonValue.GetString("volumeId");
    m_volumeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("farmId")) {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fleetId")) {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = VolumeStateMapper::GetVolumeStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeGiB")) {
    m_sizeGiB = jsonValue.GetInteger("sizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZoneId")) {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attachedWorkerId")) {
    m_attachedWorkerId = jsonValue.GetString("attachedWorkerId");
    m_attachedWorkerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("volumeType")) {
    m_volumeType = EbsVolumeTypeMapper::GetEbsVolumeTypeForName(jsonValue.GetString("volumeType"));
    m_volumeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iops")) {
    m_iops = jsonValue.GetInteger("iops");
    m_iopsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("throughputMiB")) {
    m_throughputMiB = jsonValue.GetInteger("throughputMiB");
    m_throughputMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastAssignedAt")) {
    m_lastAssignedAt = jsonValue.GetString("lastAssignedAt");
    m_lastAssignedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastReleasedAt")) {
    m_lastReleasedAt = jsonValue.GetString("lastReleasedAt");
    m_lastReleasedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetString("expiresAt");
    m_expiresAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
