/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/storagegateway/model/NFSFileShareDefaults.h>
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

NFSFileShareDefaults::NFSFileShareDefaults() : 
    m_fileModeHasBeenSet(false),
    m_directoryModeHasBeenSet(false),
    m_groupId(0),
    m_groupIdHasBeenSet(false),
    m_ownerId(0),
    m_ownerIdHasBeenSet(false)
{
}

NFSFileShareDefaults::NFSFileShareDefaults(const JsonValue& jsonValue) : 
    m_fileModeHasBeenSet(false),
    m_directoryModeHasBeenSet(false),
    m_groupId(0),
    m_groupIdHasBeenSet(false),
    m_ownerId(0),
    m_ownerIdHasBeenSet(false)
{
  *this = jsonValue;
}

NFSFileShareDefaults& NFSFileShareDefaults::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FileMode"))
  {
    m_fileMode = jsonValue.GetString("FileMode");

    m_fileModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DirectoryMode"))
  {
    m_directoryMode = jsonValue.GetString("DirectoryMode");

    m_directoryModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetInt64("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetInt64("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NFSFileShareDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_fileModeHasBeenSet)
  {
   payload.WithString("FileMode", m_fileMode);

  }

  if(m_directoryModeHasBeenSet)
  {
   payload.WithString("DirectoryMode", m_directoryMode);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithInt64("GroupId", m_groupId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithInt64("OwnerId", m_ownerId);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws