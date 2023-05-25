/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/DatastoreFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

DatastoreFilter::DatastoreFilter() : 
    m_datastoreNameHasBeenSet(false),
    m_datastoreStatus(DatastoreStatus::NOT_SET),
    m_datastoreStatusHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false)
{
}

DatastoreFilter::DatastoreFilter(JsonView jsonValue) : 
    m_datastoreNameHasBeenSet(false),
    m_datastoreStatus(DatastoreStatus::NOT_SET),
    m_datastoreStatusHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_createdAfterHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreFilter& DatastoreFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatastoreName"))
  {
    m_datastoreName = jsonValue.GetString("DatastoreName");

    m_datastoreNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatastoreStatus"))
  {
    m_datastoreStatus = DatastoreStatusMapper::GetDatastoreStatusForName(jsonValue.GetString("DatastoreStatus"));

    m_datastoreStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBefore"))
  {
    m_createdBefore = jsonValue.GetDouble("CreatedBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAfter"))
  {
    m_createdAfter = jsonValue.GetDouble("CreatedAfter");

    m_createdAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreFilter::Jsonize() const
{
  JsonValue payload;

  if(m_datastoreNameHasBeenSet)
  {
   payload.WithString("DatastoreName", m_datastoreName);

  }

  if(m_datastoreStatusHasBeenSet)
  {
   payload.WithString("DatastoreStatus", DatastoreStatusMapper::GetNameForDatastoreStatus(m_datastoreStatus));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithDouble("CreatedBefore", m_createdBefore.SecondsWithMSPrecision());
  }

  if(m_createdAfterHasBeenSet)
  {
   payload.WithDouble("CreatedAfter", m_createdAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
