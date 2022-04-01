/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/MultiLayerStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

MultiLayerStorage::MultiLayerStorage() : 
    m_customerManagedS3StorageHasBeenSet(false)
{
}

MultiLayerStorage::MultiLayerStorage(JsonView jsonValue) : 
    m_customerManagedS3StorageHasBeenSet(false)
{
  *this = jsonValue;
}

MultiLayerStorage& MultiLayerStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerManagedS3Storage"))
  {
    m_customerManagedS3Storage = jsonValue.GetObject("customerManagedS3Storage");

    m_customerManagedS3StorageHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiLayerStorage::Jsonize() const
{
  JsonValue payload;

  if(m_customerManagedS3StorageHasBeenSet)
  {
   payload.WithObject("customerManagedS3Storage", m_customerManagedS3Storage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
