/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/CustomerManagedDatastoreS3Storage.h>
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

CustomerManagedDatastoreS3Storage::CustomerManagedDatastoreS3Storage() : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

CustomerManagedDatastoreS3Storage::CustomerManagedDatastoreS3Storage(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyPrefixHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerManagedDatastoreS3Storage& CustomerManagedDatastoreS3Storage::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerManagedDatastoreS3Storage::Jsonize() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
