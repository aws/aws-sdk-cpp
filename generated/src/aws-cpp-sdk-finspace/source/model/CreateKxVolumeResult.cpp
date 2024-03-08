/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxVolumeResult.h>
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

CreateKxVolumeResult::CreateKxVolumeResult() : 
    m_volumeType(KxVolumeType::NOT_SET),
    m_status(KxVolumeStatus::NOT_SET),
    m_azMode(KxAzMode::NOT_SET)
{
}

CreateKxVolumeResult::CreateKxVolumeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_volumeType(KxVolumeType::NOT_SET),
    m_status(KxVolumeStatus::NOT_SET),
    m_azMode(KxAzMode::NOT_SET)
{
  *this = result;
}

CreateKxVolumeResult& CreateKxVolumeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");

  }

  if(jsonValue.ValueExists("volumeType"))
  {
    m_volumeType = KxVolumeTypeMapper::GetKxVolumeTypeForName(jsonValue.GetString("volumeType"));

  }

  if(jsonValue.ValueExists("volumeArn"))
  {
    m_volumeArn = jsonValue.GetString("volumeArn");

  }

  if(jsonValue.ValueExists("nas1Configuration"))
  {
    m_nas1Configuration = jsonValue.GetObject("nas1Configuration");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxVolumeStatusMapper::GetKxVolumeStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
