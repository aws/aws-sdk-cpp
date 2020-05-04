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

#include <aws/ssm/model/ResourceDataSyncAlreadyExistsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncAlreadyExistsException::ResourceDataSyncAlreadyExistsException() : 
    m_syncNameHasBeenSet(false)
{
}

ResourceDataSyncAlreadyExistsException::ResourceDataSyncAlreadyExistsException(JsonView jsonValue) : 
    m_syncNameHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncAlreadyExistsException& ResourceDataSyncAlreadyExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SyncName"))
  {
    m_syncName = jsonValue.GetString("SyncName");

    m_syncNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncAlreadyExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
