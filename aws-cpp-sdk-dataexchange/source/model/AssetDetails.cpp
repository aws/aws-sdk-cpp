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

#include <aws/dataexchange/model/AssetDetails.h>
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

AssetDetails::AssetDetails() : 
    m_s3SnapshotAssetHasBeenSet(false)
{
}

AssetDetails::AssetDetails(JsonView jsonValue) : 
    m_s3SnapshotAssetHasBeenSet(false)
{
  *this = jsonValue;
}

AssetDetails& AssetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3SnapshotAsset"))
  {
    m_s3SnapshotAsset = jsonValue.GetObject("S3SnapshotAsset");

    m_s3SnapshotAssetHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_s3SnapshotAssetHasBeenSet)
  {
   payload.WithObject("S3SnapshotAsset", m_s3SnapshotAsset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
