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
    AWS_DATAEXCHANGE_API Details() = default;
    AWS_DATAEXCHANGE_API Details(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Details& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the job error.</p>
     */
    inline const ImportAssetFromSignedUrlJobErrorDetails& GetImportAssetFromSignedUrlJobErrorDetails() const { return m_importAssetFromSignedUrlJobErrorDetails; }
    inline bool ImportAssetFromSignedUrlJobErrorDetailsHasBeenSet() const { return m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet; }
    template<typename ImportAssetFromSignedUrlJobErrorDetailsT = ImportAssetFromSignedUrlJobErrorDetails>
    void SetImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetailsT&& value) { m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = true; m_importAssetFromSignedUrlJobErrorDetails = std::forward<ImportAssetFromSignedUrlJobErrorDetailsT>(value); }
    template<typename ImportAssetFromSignedUrlJobErrorDetailsT = ImportAssetFromSignedUrlJobErrorDetails>
    Details& WithImportAssetFromSignedUrlJobErrorDetails(ImportAssetFromSignedUrlJobErrorDetailsT&& value) { SetImportAssetFromSignedUrlJobErrorDetails(std::forward<ImportAssetFromSignedUrlJobErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the job error.</p>
     */
    inline const Aws::Vector<AssetSourceEntry>& GetImportAssetsFromS3JobErrorDetails() const { return m_importAssetsFromS3JobErrorDetails; }
    inline bool ImportAssetsFromS3JobErrorDetailsHasBeenSet() const { return m_importAssetsFromS3JobErrorDetailsHasBeenSet; }
    template<typename ImportAssetsFromS3JobErrorDetailsT = Aws::Vector<AssetSourceEntry>>
    void SetImportAssetsFromS3JobErrorDetails(ImportAssetsFromS3JobErrorDetailsT&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails = std::forward<ImportAssetsFromS3JobErrorDetailsT>(value); }
    template<typename ImportAssetsFromS3JobErrorDetailsT = Aws::Vector<AssetSourceEntry>>
    Details& WithImportAssetsFromS3JobErrorDetails(ImportAssetsFromS3JobErrorDetailsT&& value) { SetImportAssetsFromS3JobErrorDetails(std::forward<ImportAssetsFromS3JobErrorDetailsT>(value)); return *this;}
    template<typename ImportAssetsFromS3JobErrorDetailsT = AssetSourceEntry>
    Details& AddImportAssetsFromS3JobErrorDetails(ImportAssetsFromS3JobErrorDetailsT&& value) { m_importAssetsFromS3JobErrorDetailsHasBeenSet = true; m_importAssetsFromS3JobErrorDetails.emplace_back(std::forward<ImportAssetsFromS3JobErrorDetailsT>(value)); return *this; }
    ///@}
  private:

    ImportAssetFromSignedUrlJobErrorDetails m_importAssetFromSignedUrlJobErrorDetails;
    bool m_importAssetFromSignedUrlJobErrorDetailsHasBeenSet = false;

    Aws::Vector<AssetSourceEntry> m_importAssetsFromS3JobErrorDetails;
    bool m_importAssetsFromS3JobErrorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
