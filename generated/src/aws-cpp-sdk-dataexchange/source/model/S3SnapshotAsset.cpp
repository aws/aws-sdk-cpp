/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/S3SnapshotAsset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

S3SnapshotAsset::S3SnapshotAsset() : 
    m_size(0.0),
    m_sizeHasBeenSet(false)
{
}

S3SnapshotAsset::S3SnapshotAsset(JsonView jsonValue) : 
    m_size(0.0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

S3SnapshotAsset& S3SnapshotAsset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetDouble("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue S3SnapshotAsset::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithDouble("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
