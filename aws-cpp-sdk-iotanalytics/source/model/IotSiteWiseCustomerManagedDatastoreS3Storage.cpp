/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/IotSiteWiseCustomerManagedDatastoreS3Storage.h>
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

IotSiteWiseCustomerManagedDatastoreS3Storage::IotSiteWiseCustomerManagedDatastoreS3Storage() : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
}

IotSiteWiseCustomerManagedDatastoreS3Storage::IotSiteWiseCustomerManagedDatastoreS3Storage(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseCustomerManagedDatastoreS3Storage& IotSiteWiseCustomerManagedDatastoreS3Storage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");

    m_keyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue IotSiteWiseCustomerManagedDatastoreS3Storage::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
