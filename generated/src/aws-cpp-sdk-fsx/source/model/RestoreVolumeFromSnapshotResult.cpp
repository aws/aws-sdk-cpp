/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/RestoreVolumeFromSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreVolumeFromSnapshotResult::RestoreVolumeFromSnapshotResult() : 
    m_lifecycle(VolumeLifecycle::NOT_SET)
{
}

RestoreVolumeFromSnapshotResult::RestoreVolumeFromSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifecycle(VolumeLifecycle::NOT_SET)
{
  *this = result;
}

RestoreVolumeFromSnapshotResult& RestoreVolumeFromSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VolumeId"))
  {
    m_volumeId = jsonValue.GetString("VolumeId");

  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = VolumeLifecycleMapper::GetVolumeLifecycleForName(jsonValue.GetString("Lifecycle"));

  }

  if(jsonValue.ValueExists("AdministrativeActions"))
  {
    Aws::Utils::Array<JsonView> administrativeActionsJsonList = jsonValue.GetArray("AdministrativeActions");
    for(unsigned administrativeActionsIndex = 0; administrativeActionsIndex < administrativeActionsJsonList.GetLength(); ++administrativeActionsIndex)
    {
      m_administrativeActions.push_back(administrativeActionsJsonList[administrativeActionsIndex].AsObject());
    }
  }



  return *this;
}
