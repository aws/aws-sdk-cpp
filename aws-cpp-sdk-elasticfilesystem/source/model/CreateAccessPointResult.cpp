/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/CreateAccessPointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessPointResult::CreateAccessPointResult() : 
    m_lifeCycleState(LifeCycleState::NOT_SET)
{
}

CreateAccessPointResult::CreateAccessPointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_lifeCycleState(LifeCycleState::NOT_SET)
{
  *this = result;
}

CreateAccessPointResult& CreateAccessPointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AccessPointId"))
  {
    m_accessPointId = jsonValue.GetString("AccessPointId");

  }

  if(jsonValue.ValueExists("AccessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");

  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

  }

  if(jsonValue.ValueExists("PosixUser"))
  {
    m_posixUser = jsonValue.GetObject("PosixUser");

  }

  if(jsonValue.ValueExists("RootDirectory"))
  {
    m_rootDirectory = jsonValue.GetObject("RootDirectory");

  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

  }



  return *this;
}
