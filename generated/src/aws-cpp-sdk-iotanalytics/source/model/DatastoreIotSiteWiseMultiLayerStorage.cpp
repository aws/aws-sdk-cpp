/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreIotSiteWiseMultiLayerStorage.h>
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

DatastoreIotSiteWiseMultiLayerStorage::DatastoreIotSiteWiseMultiLayerStorage() : 
    m_customerManagedS3StorageHasBeenSet(false)
{
}

DatastoreIotSiteWiseMultiLayerStorage::DatastoreIotSiteWiseMultiLayerStorage(JsonView jsonValue) : 
    m_customerManagedS3StorageHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreIotSiteWiseMultiLayerStorage& DatastoreIotSiteWiseMultiLayerStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerManagedS3Storage"))
  {
    m_customerManagedS3Storage = jsonValue.GetObject("customerManagedS3Storage");

    m_customerManagedS3StorageHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreIotSiteWiseMultiLayerStorage::Jsonize() const
{
  JsonValue payload;

  if(m_customerManagedS3StorageHasBeenSet)
  {
   payload.WithObject("customerManagedS3Storage", m_customerManagedS3Storage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
