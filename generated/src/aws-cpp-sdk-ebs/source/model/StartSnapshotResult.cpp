/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/StartSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSnapshotResult::StartSnapshotResult() : 
    m_status(Status::NOT_SET),
    m_volumeSize(0),
    m_blockSize(0)
{
}

StartSnapshotResult::StartSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET),
    m_volumeSize(0),
    m_blockSize(0)
{
  *this = result;
}

StartSnapshotResult& StartSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInt64("VolumeSize");

  }

  if(jsonValue.ValueExists("BlockSize"))
  {
    m_blockSize = jsonValue.GetInteger("BlockSize");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ParentSnapshotId"))
  {
    m_parentSnapshotId = jsonValue.GetString("ParentSnapshotId");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }



  return *this;
}
