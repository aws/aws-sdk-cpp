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

  /**
   * <p>Information about the job error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/Details">AWS
   * API Reference</a></p>
   */
  class Details
  {
  public:
    AWS_DATAEXCHANGE_API Details();
    AWS_DATAEXCHANGE_API Details(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Details& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the job error.</p>
     */
    inline const ImportAssetFromSignedUrlJobErrorDetails& GetImportAssetFromSignedUrlJobErrorDetails() const{ return m_importAssetFromSignedUrlJobErrorDetails; }

    /**
     * <p>Information about the job error.</p>
     */
    inline bool ImportAssetFromSignedUrlJobErrorDetailsHasBeenSet() const { return m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet; }

    /**
     * <p>Information about the job error.</p>
     */
    inline void SetImportAssetFromSignedUrlJobErrorDetails(const ImportAssetFromSignedUrlJobErrorDetails& value) { m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true; m_importAssetFromSignedUrlJobErrorDetails = value; }

    /**
     * <p>Information about the job error.</p>
     */
    inline void SetImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetails&& value) { m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true; m_importAssetFromSignedUrlJobErrorDetails = std::move(value); }

    /**
     * <p>Information about the job error.</p>
     */
    inline Details& WithImportAssetFromSignedUrlJobErrorDetails(const ImportAssetFromSignedUrlJobErrorDetails& value) { SetImportAssetFromSignedUrlJobErrorDetails(value); return *this;}

    /**
     * <p>Information about the job error.</p>
     */
    inline Details& WithImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetails&& value) { SetImportAssetFromSignedUrlJobErrorDetails(std::move(value)); return *this;}


    /**
     * <p>Details about the job error.</p>
     */
    inline const Aws::Vector<AssetSourceEntry>& GetImportAssetsFromS3JobErrorDetails() const{ return m_importAssetsFromS3JobErrorDetails; }

    /**
     * <p>Details about the job error.</p>
     */
    inline bool ImportAssetsFromS3JobErrorDetailsHasBeenSet() const { return m_importAssetsFromS3JobErrorDetailsHasBeenSet; }

    /**
     * <p>Details about the job error.</p>
     */
    inline void SetImportAssetsFromS3JobErrorDetails(const Aws::Vector<AssetSourceEntry>& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails = value; }

    /**
     * <p>Details about the job error.</p>
     */
    inline void SetImportAssetsFromS3JobErrorDetails(Aws::Vector<AssetSourceEntry>&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails = std::move(value); }

    /**
     * <p>Details about the job error.</p>
     */
    inline Details& WithImportAssetsFromS3JobErrorDetails(const Aws::Vector<AssetSourceEntry>& value) { SetImportAssetsFromS3JobErrorDetails(value); return *this;}

    /**
     * <p>Details about the job error.</p>
     */
    inline Details& WithImportAssetsFromS3JobErrorDetails(Aws::Vector<AssetSourceEntry>&& value) { SetImportAssetsFromS3JobErrorDetails(std::move(value)); return *this;}

    /**
     * <p>Details about the job error.</p>
     */
    inline Details& AddImportAssetsFromS3JobErrorDetails(const AssetSourceEntry& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails.push_back(value); return *this; }

    /**
     * <p>Details about the job error.</p>
     */
    inline Details& AddImportAssetsFromS3JobErrorDetails(AssetSourceEntry&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails.push_back(std::move(value)); return *this; }

  private:

    ImportAssetFromSignedUrlJobErrorDetails m_importAssetFromSignedUrlJobErrorDetails;
    bool m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = false;

    Aws::Vector<AssetSourceEntry> m_importAssetsFromS3JobErrorDetails;
    bool m_importAssetsFromS3JobErrorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
