﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CopySnapshotAndUpdateVolumeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CopySnapshotAndUpdateVolumeResult::CopySnapshotAndUpdateVolumeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CopySnapshotAndUpdateVolumeResult& CopySnapshotAndUpdateVolumeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");
    m_volumeIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = VolumeLifecycleMapper::GetVolumeLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdministrativeActions"))
  {
    Aws::Utils::Array<JsonView> administrativeActionsJsonList = jsonValue.GetArray("AdministrativeActions");
    for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
    {
      m_administrativeActions.push_back(administrativeActionsJsonList[administrativeActionsIndex].AsObject());
    }
    m_administrativeActionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
