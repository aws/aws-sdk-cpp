/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/S3ExportSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

S3ExportSpecification::S3ExportSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

S3ExportSpecification& S3ExportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationBucket"))
  {
    m_destinationBucket = jsonValue.GetString("DestinationBucket");
    m_destinationBucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationPrefix"))
  {
    m_destinationPrefix = jsonValue.GetString("DestinationPrefix");
    m_destinationPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ExportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_destinationBucketHasBeenSet)
  {
   payload.WithString("DestinationBucket", m_destinationBucket);

  }

  if(m_destinationPrefixHasBeenSet)
  {
   payload.WithString("DestinationPrefix", m_destinationPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
