﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/S3InputFileLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

S3InputFileLocation::S3InputFileLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

S3InputFileLocation& S3InputFileLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");
    m_bucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  return *this;
}

JsonValue S3InputFileLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
