/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/IotSiteWiseCustomerManagedDatastoreS3StorageSummary.h>
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

IotSiteWiseCustomerManagedDatastoreS3StorageSummary::IotSiteWiseCustomerManagedDatastoreS3StorageSummary() : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
}

IotSiteWiseCustomerManagedDatastoreS3StorageSummary::IotSiteWiseCustomerManagedDatastoreS3StorageSummary(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

IotSiteWiseCustomerManagedDatastoreS3StorageSummary& IotSiteWiseCustomerManagedDatastoreS3StorageSummary::operator =(JsonView jsonValue)
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

JsonValue IotSiteWiseCustomerManagedDatastoreS3StorageSummary::Jsonize() const
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
