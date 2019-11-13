/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
