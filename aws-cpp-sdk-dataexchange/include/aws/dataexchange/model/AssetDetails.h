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

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/S3SnapshotAsset.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  class AWS_DATAEXCHANGE_API AssetDetails
  {
  public:
    AssetDetails();
    AssetDetails(Aws::Utils::Json::JsonView jsonValue);
    AssetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3SnapshotAsset& GetS3SnapshotAsset() const{ return m_s3SnapshotAsset; }

    
    inline bool S3SnapshotAssetHasBeenSet() const { return m_s3SnapshotAssetHasBeenSet; }

    
    inline void SetS3SnapshotAsset(const S3SnapshotAsset& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = value; }

    
    inline void SetS3SnapshotAsset(S3SnapshotAsset&& value) { m_s3SnapshotAssetHasBeenSet = true; m_s3SnapshotAsset = std::move(value); }

    
    inline AssetDetails& WithS3SnapshotAsset(const S3SnapshotAsset& value) { SetS3SnapshotAsset(value); return *this;}

    
    inline AssetDetails& WithS3SnapshotAsset(S3SnapshotAsset&& value) { SetS3SnapshotAsset(std::move(value)); return *this;}

  private:

    S3SnapshotAsset m_s3SnapshotAsset;
    bool m_s3SnapshotAssetHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
