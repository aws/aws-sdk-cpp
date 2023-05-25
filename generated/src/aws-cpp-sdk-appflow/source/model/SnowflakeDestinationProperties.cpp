/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SnowflakeDestinationProperties.h>
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

SnowflakeDestinationProperties::SnowflakeDestinationProperties() : 
    m_objectHasBeenSet(false),
    m_intermediateBucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
}

SnowflakeDestinationProperties::SnowflakeDestinationProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_intermediateBucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeDestinationProperties& SnowflakeDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intermediateBucketName"))
  {
    m_intermediateBucketName = jsonValue.GetString("intermediateBucketName");

    m_intermediateBucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("bucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorHandlingConfig"))
  {
    m_errorHandlingConfig = jsonValue.GetObject("errorHandlingConfig");

    m_errorHandlingConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

  }

  if(m_intermediateBucketNameHasBeenSet)
  {
   payload.WithString("intermediateBucketName", m_intermediateBucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("bucketPrefix", m_bucketPrefix);

  }

  if(m_errorHandlingConfigHasBeenSet)
  {
   payload.WithObject("errorHandlingConfig", m_errorHandlingConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
