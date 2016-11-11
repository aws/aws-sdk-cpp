/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticfilesystem/model/CreateFileSystemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFileSystemResult::CreateFileSystemResult() : 
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_numberOfMountTargets(0),
    m_performanceMode(PerformanceMode::NOT_SET)
{
}

CreateFileSystemResult::CreateFileSystemResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_numberOfMountTargets(0),
    m_performanceMode(PerformanceMode::NOT_SET)
{
  *this = result;
}

CreateFileSystemResult& CreateFileSystemResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

  }

  if(jsonValue.ValueExists("CreationToken"))
  {
    m_creationToken = jsonValue.GetString("CreationToken");

  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("NumberOfMountTargets"))
  {
    m_numberOfMountTargets = jsonValue.GetInteger("NumberOfMountTargets");

  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetObject("SizeInBytes");

  }

  if(jsonValue.ValueExists("PerformanceMode"))
  {
    m_performanceMode = PerformanceModeMapper::GetPerformanceModeForName(jsonValue.GetString("PerformanceMode"));

  }



  return *this;
}
