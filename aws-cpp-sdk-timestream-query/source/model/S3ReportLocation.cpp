/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/S3ReportLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

S3ReportLocation::S3ReportLocation() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
}

S3ReportLocation::S3ReportLocation(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReportLocation& S3ReportLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKey"))
  {
    m_objectKey = jsonValue.GetString("ObjectKey");

    m_objectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ReportLocation::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("ObjectKey", m_objectKey);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
