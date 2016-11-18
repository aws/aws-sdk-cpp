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
#include <aws/cognito-sync/model/IdentityPoolUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

IdentityPoolUsage::IdentityPoolUsage() : 
    m_identityPoolIdHasBeenSet(false),
    m_syncSessionsCount(0),
    m_syncSessionsCountHasBeenSet(false),
    m_dataStorage(0),
    m_dataStorageHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

IdentityPoolUsage::IdentityPoolUsage(const JsonValue& jsonValue) : 
    m_identityPoolIdHasBeenSet(false),
    m_syncSessionsCount(0),
    m_syncSessionsCountHasBeenSet(false),
    m_dataStorage(0),
    m_dataStorageHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityPoolUsage& IdentityPoolUsage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

    m_identityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncSessionsCount"))
  {
    m_syncSessionsCount = jsonValue.GetInt64("SyncSessionsCount");

    m_syncSessionsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataStorage"))
  {
    m_dataStorage = jsonValue.GetInt64("DataStorage");

    m_dataStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityPoolUsage::Jsonize() const
{
  JsonValue payload;

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_syncSessionsCountHasBeenSet)
  {
   payload.WithInt64("SyncSessionsCount", m_syncSessionsCount);

  }

  if(m_dataStorageHasBeenSet)
  {
   payload.WithInt64("DataStorage", m_dataStorage);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws