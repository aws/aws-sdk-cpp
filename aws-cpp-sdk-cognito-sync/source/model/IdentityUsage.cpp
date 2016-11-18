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
#include <aws/cognito-sync/model/IdentityUsage.h>
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

IdentityUsage::IdentityUsage() : 
    m_identityIdHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_datasetCount(0),
    m_datasetCountHasBeenSet(false),
    m_dataStorage(0),
    m_dataStorageHasBeenSet(false)
{
}

IdentityUsage::IdentityUsage(const JsonValue& jsonValue) : 
    m_identityIdHasBeenSet(false),
    m_identityPoolIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_datasetCount(0),
    m_datasetCountHasBeenSet(false),
    m_dataStorage(0),
    m_dataStorageHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityUsage& IdentityUsage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");

    m_identityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

    m_identityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetCount"))
  {
    m_datasetCount = jsonValue.GetInteger("DatasetCount");

    m_datasetCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataStorage"))
  {
    m_dataStorage = jsonValue.GetInt64("DataStorage");

    m_dataStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityUsage::Jsonize() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_identityPoolIdHasBeenSet)
  {
   payload.WithString("IdentityPoolId", m_identityPoolId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_datasetCountHasBeenSet)
  {
   payload.WithInteger("DatasetCount", m_datasetCount);

  }

  if(m_dataStorageHasBeenSet)
  {
   payload.WithInt64("DataStorage", m_dataStorage);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws