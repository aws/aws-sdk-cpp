﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/Dataset.h>
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

Dataset::Dataset(JsonView jsonValue)
{
  *this = jsonValue;
}

Dataset& Dataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");
    m_identityIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");
    m_datasetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");
    m_creationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataStorage"))
  {
    m_dataStorage = jsonValue.GetInt64("DataStorage");
    m_dataStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumRecords"))
  {
    m_numRecords = jsonValue.GetInt64("NumRecords");
    m_numRecordsHasBeenSet = true;
  }
  return *this;
}

JsonValue Dataset::Jsonize() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_dataStorageHasBeenSet)
  {
   payload.WithInt64("DataStorage", m_dataStorage);

  }

  if(m_numRecordsHasBeenSet)
  {
   payload.WithInt64("NumRecords", m_numRecords);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
