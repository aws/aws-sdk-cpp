/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/S3StorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

S3StorageConfiguration::S3StorageConfiguration() : 
    m_bucketNameHasBeenSet(false)
{
}

S3StorageConfiguration::S3StorageConfiguration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

S3StorageConfiguration& S3StorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue S3StorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
