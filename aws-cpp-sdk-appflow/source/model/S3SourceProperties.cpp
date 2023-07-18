﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/S3SourceProperties.h>
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

S3SourceProperties::S3SourceProperties() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_s3InputFormatConfigHasBeenSet(false)
{
}

S3SourceProperties::S3SourceProperties(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_s3InputFormatConfigHasBeenSet(false)
{
  *this = jsonValue;
}

S3SourceProperties& S3SourceProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("s3InputFormatConfig"))
  {
    m_s3InputFormatConfig = jsonValue.GetObject("s3InputFormatConfig");

    m_s3InputFormatConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue S3SourceProperties::Jsonize() const
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

  if(m_s3InputFormatConfigHasBeenSet)
  {
   payload.WithObject("s3InputFormatConfig", m_s3InputFormatConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
