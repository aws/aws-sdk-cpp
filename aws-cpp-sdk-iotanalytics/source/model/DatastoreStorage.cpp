/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatastoreStorage::DatastoreStorage() : 
    m_serviceManagedS3HasBeenSet(false),
    m_customerManagedS3HasBeenSet(false)
{
}

DatastoreStorage::DatastoreStorage(JsonView jsonValue) : 
    m_serviceManagedS3HasBeenSet(false),
    m_customerManagedS3HasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreStorage& DatastoreStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceManagedS3"))
  {
    m_serviceManagedS3 = jsonValue.GetObject("serviceManagedS3");

    m_serviceManagedS3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerManagedS3"))
  {
    m_customerManagedS3 = jsonValue.GetObject("customerManagedS3");

    m_customerManagedS3HasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreStorage::Jsonize() const
{
  JsonValue payload;

  if(m_serviceManagedS3HasBeenSet)
  {
   payload.WithObject("serviceManagedS3", m_serviceManagedS3.Jsonize());

  }

  if(m_customerManagedS3HasBeenSet)
  {
   payload.WithObject("customerManagedS3", m_customerManagedS3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
