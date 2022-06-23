/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreIotSiteWiseMultiLayerStorageSummary.h>
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

DatastoreIotSiteWiseMultiLayerStorageSummary::DatastoreIotSiteWiseMultiLayerStorageSummary() : 
    m_customerManagedS3StorageHasBeenSet(false)
{
}

DatastoreIotSiteWiseMultiLayerStorageSummary::DatastoreIotSiteWiseMultiLayerStorageSummary(JsonView jsonValue) : 
    m_customerManagedS3StorageHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreIotSiteWiseMultiLayerStorageSummary& DatastoreIotSiteWiseMultiLayerStorageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerManagedS3Storage"))
  {
    m_customerManagedS3Storage = jsonValue.GetObject("customerManagedS3Storage");

    m_customerManagedS3StorageHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreIotSiteWiseMultiLayerStorageSummary::Jsonize() const
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
