/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/ImportAssetFromSignedUrlJobErrorDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dataexchange/model/AssetSourceEntry.h>
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

  class AWS_DATAEXCHANGE_API Details
  {
  public:
    Details();
    Details(Aws::Utils::Json::JsonView jsonValue);
    Details& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ImportAssetFromSignedUrlJobErrorDetails& GetImportAssetFromSignedUrlJobErrorDetails() const{ return m_importAssetFromSignedUrlJobErrorDetails; }

    
    inline bool ImportAssetFromSignedUrlJobErrorDetailsHasBeenSet() const { return m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet; }

    
    inline void SetImportAssetFromSignedUrlJobErrorDetails(const ImportAssetFromSignedUrlJobErrorDetails& value) { m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true; m_importAssetFromSignedUrlJobErrorDetails = value; }

    
    inline void SetImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetails&& value) { m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true; m_importAssetFromSignedUrlJobErrorDetails = std::move(value); }

    
    inline Details& WithImportAssetFromSignedUrlJobErrorDetails(const ImportAssetFromSignedUrlJobErrorDetails& value) { SetImportAssetFromSignedUrlJobErrorDetails(value); return *this;}

    
    inline Details& WithImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetails&& value) { SetImportAssetFromSignedUrlJobErrorDetails(std::move(value)); return *this;}


    
    inline const Aws::Vector<AssetSourceEntry>& GetImportAssetsFromS3JobErrorDetails() const{ return m_importAssetsFromS3JobErrorDetails; }

    
    inline bool ImportAssetsFromS3JobErrorDetailsHasBeenSet() const { return m_importAssetsFromS3JobErrorDetailsHasBeenSet; }

    
    inline void SetImportAssetsFromS3JobErrorDetails(const Aws::Vector<AssetSourceEntry>& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails = value; }

    
    inline void SetImportAssetsFromS3JobErrorDetails(Aws::Vector<AssetSourceEntry>&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails = std::move(value); }

    
    inline Details& WithImportAssetsFromS3JobErrorDetails(const Aws::Vector<AssetSourceEntry>& value) { SetImportAssetsFromS3JobErrorDetails(value); return *this;}

    
    inline Details& WithImportAssetsFromS3JobErrorDetails(Aws::Vector<AssetSourceEntry>&& value) { SetImportAssetsFromS3JobErrorDetails(std::move(value)); return *this;}

    
    inline Details& AddImportAssetsFromS3JobErrorDetails(const AssetSourceEntry& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails.push_back(value); return *this; }

    
    inline Details& AddImportAssetsFromS3JobErrorDetails(AssetSourceEntry&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails.push_back(std::move(value)); return *this; }

  private:

    ImportAssetFromSignedUrlJobErrorDetails m_importAssetFromSignedUrlJobErrorDetails;
    bool m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet;

    Aws::Vector<AssetSourceEntry> m_importAssetsFromS3JobErrorDetails;
    bool m_importAssetsFromS3JobErrorDetailsHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
