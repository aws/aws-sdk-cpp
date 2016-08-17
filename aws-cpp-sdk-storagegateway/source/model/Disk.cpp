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
#include <aws/storagegateway/model/Disk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

Disk::Disk() : 
    m_diskIdHasBeenSet(false),
    m_diskPathHasBeenSet(false),
    m_diskNodeHasBeenSet(false),
    m_diskStatusHasBeenSet(false),
    m_diskSizeInBytes(0),
    m_diskSizeInBytesHasBeenSet(false),
    m_diskAllocationTypeHasBeenSet(false),
    m_diskAllocationResourceHasBeenSet(false)
{
}

Disk::Disk(const JsonValue& jsonValue) : 
    m_diskIdHasBeenSet(false),
    m_diskPathHasBeenSet(false),
    m_diskNodeHasBeenSet(false),
    m_diskStatusHasBeenSet(false),
    m_diskSizeInBytes(0),
    m_diskSizeInBytesHasBeenSet(false),
    m_diskAllocationTypeHasBeenSet(false),
    m_diskAllocationResourceHasBeenSet(false)
{
  *this = jsonValue;
}

Disk& Disk::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DiskId"))
  {
    m_diskId = jsonValue.GetString("DiskId");

    m_diskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskPath"))
  {
    m_diskPath = jsonValue.GetString("DiskPath");

    m_diskPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskNode"))
  {
    m_diskNode = jsonValue.GetString("DiskNode");

    m_diskNodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskStatus"))
  {
    m_diskStatus = jsonValue.GetString("DiskStatus");

    m_diskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskSizeInBytes"))
  {
    m_diskSizeInBytes = jsonValue.GetInt64("DiskSizeInBytes");

    m_diskSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskAllocationType"))
  {
    m_diskAllocationType = jsonValue.GetString("DiskAllocationType");

    m_diskAllocationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskAllocationResource"))
  {
    m_diskAllocationResource = jsonValue.GetString("DiskAllocationResource");

    m_diskAllocationResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue Disk::Jsonize() const
{
  JsonValue payload;

  if(m_diskIdHasBeenSet)
  {
   payload.WithString("DiskId", m_diskId);

  }

  if(m_diskPathHasBeenSet)
  {
   payload.WithString("DiskPath", m_diskPath);

  }

  if(m_diskNodeHasBeenSet)
  {
   payload.WithString("DiskNode", m_diskNode);

  }

  if(m_diskStatusHasBeenSet)
  {
   payload.WithString("DiskStatus", m_diskStatus);

  }

  if(m_diskSizeInBytesHasBeenSet)
  {
   payload.WithInt64("DiskSizeInBytes", m_diskSizeInBytes);

  }

  if(m_diskAllocationTypeHasBeenSet)
  {
   payload.WithString("DiskAllocationType", m_diskAllocationType);

  }

  if(m_diskAllocationResourceHasBeenSet)
  {
   payload.WithString("DiskAllocationResource", m_diskAllocationResource);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws