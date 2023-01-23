/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/S3DestinationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

S3DestinationProperties::S3DestinationProperties() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_s3OutputFormatConfigHasBeenSet(false)
{
}

S3DestinationProperties::S3DestinationProperties(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_s3OutputFormatConfigHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationProperties& S3DestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("bucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3OutputFormatConfig"))
  {
    m_s3OutputFormatConfig = jsonValue.GetObject("s3OutputFormatConfig");

    m_s3OutputFormatConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("bucketPrefix", m_bucketPrefix);

  }

  if(m_s3OutputFormatConfigHasBeenSet)
  {
   payload.WithObject("s3OutputFormatConfig", m_s3OutputFormatConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
