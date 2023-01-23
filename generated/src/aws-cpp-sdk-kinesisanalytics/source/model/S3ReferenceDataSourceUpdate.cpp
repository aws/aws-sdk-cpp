/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/S3ReferenceDataSourceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

S3ReferenceDataSourceUpdate::S3ReferenceDataSourceUpdate() : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_referenceRoleARNUpdateHasBeenSet(false)
{
}

S3ReferenceDataSourceUpdate::S3ReferenceDataSourceUpdate(JsonView jsonValue) : 
    m_bucketARNUpdateHasBeenSet(false),
    m_fileKeyUpdateHasBeenSet(false),
    m_referenceRoleARNUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

S3ReferenceDataSourceUpdate& S3ReferenceDataSourceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketARNUpdate"))
  {
    m_bucketARNUpdate = jsonValue.GetString("BucketARNUpdate");

    m_bucketARNUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileKeyUpdate"))
  {
    m_fileKeyUpdate = jsonValue.GetString("FileKeyUpdate");

    m_fileKeyUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceRoleARNUpdate"))
  {
    m_referenceRoleARNUpdate = jsonValue.GetString("ReferenceRoleARNUpdate");

    m_referenceRoleARNUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ReferenceDataSourceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_bucketARNUpdateHasBeenSet)
  {
   payload.WithString("BucketARNUpdate", m_bucketARNUpdate);

  }

  if(m_fileKeyUpdateHasBeenSet)
  {
   payload.WithString("FileKeyUpdate", m_fileKeyUpdate);

  }

  if(m_referenceRoleARNUpdateHasBeenSet)
  {
   payload.WithString("ReferenceRoleARNUpdate", m_referenceRoleARNUpdate);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
