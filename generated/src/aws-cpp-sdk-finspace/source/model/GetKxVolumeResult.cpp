/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxVolumeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKxVolumeResult::GetKxVolumeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKxVolumeResult& GetKxVolumeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");
    m_volumeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = KxVolumeTypeMapper::GetKxVolumeTypeForName(jsonValue.GetString("volumeType"));
    m_volumeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeArn"))
  {
    m_volumeArn = jsonValue.GetString("volumeArn");
    m_volumeArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nas1Configuration"))
  {
    m_nas1Configuration = jsonValue.GetObject("nas1Configuration");
    m_nas1ConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = KxVolumeStatusMapper::GetKxVolumeStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));
    m_azModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
    m_availabilityZoneIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");
    m_lastModifiedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attachedClusters"))
  {
    Aws::Utils::Array<JsonView> attachedClustersJsonList = jsonValue.GetArray("attachedClusters");
    for(unsigned attachedClustersIndex = 0; attachedClustersIndex < attachedClustersJsonList.GetLength(); ++attachedClustersIndex)
    {
      m_attachedClusters.push_back(attachedClustersJsonList[attachedClustersIndex].AsObject());
    }
    m_attachedClustersHasBeenSet = true;
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
