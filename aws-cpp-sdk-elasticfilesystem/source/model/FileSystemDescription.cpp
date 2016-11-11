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
#include <aws/elasticfilesystem/model/FileSystemDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

FileSystemDescription::FileSystemDescription() : 
    m_ownerIdHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_numberOfMountTargets(0),
    m_numberOfMountTargetsHasBeenSet(false),
    m_sizeInBytesHasBeenSet(false),
    m_performanceMode(PerformanceMode::NOT_SET),
    m_performanceModeHasBeenSet(false)
{
}

FileSystemDescription::FileSystemDescription(const JsonValue& jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_numberOfMountTargets(0),
    m_numberOfMountTargetsHasBeenSet(false),
    m_sizeInBytesHasBeenSet(false),
    m_performanceMode(PerformanceMode::NOT_SET),
    m_performanceModeHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemDescription& FileSystemDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationToken"))
  {
    m_creationToken = jsonValue.GetString("CreationToken");

    m_creationTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

    m_lifeCycleStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfMountTargets"))
  {
    m_numberOfMountTargets = jsonValue.GetInteger("NumberOfMountTargets");

    m_numberOfMountTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SizeInBytes"))
  {
    m_sizeInBytes = jsonValue.GetObject("SizeInBytes");

    m_sizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceMode"))
  {
    m_performanceMode = PerformanceModeMapper::GetPerformanceModeForName(jsonValue.GetString("PerformanceMode"));

    m_performanceModeHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemDescription::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_creationTokenHasBeenSet)
  {
   payload.WithString("CreationToken", m_creationToken);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lifeCycleStateHasBeenSet)
  {
   payload.WithString("LifeCycleState", LifeCycleStateMapper::GetNameForLifeCycleState(m_lifeCycleState));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_numberOfMountTargetsHasBeenSet)
  {
   payload.WithInteger("NumberOfMountTargets", m_numberOfMountTargets);

  }

  if(m_sizeInBytesHasBeenSet)
  {
   payload.WithObject("SizeInBytes", m_sizeInBytes.Jsonize());

  }

  if(m_performanceModeHasBeenSet)
  {
   payload.WithString("PerformanceMode", PerformanceModeMapper::GetNameForPerformanceMode(m_performanceMode));
  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws