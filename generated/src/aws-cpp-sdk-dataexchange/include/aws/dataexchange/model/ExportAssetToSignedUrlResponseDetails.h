/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details of the export to signed URL response.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportAssetToSignedUrlResponseDetails">AWS
   * API Reference</a></p>
   */
  class ExportAssetToSignedUrlResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails() = default;
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportAssetToSignedUrlResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the asset associated with this export job.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    ExportAssetToSignedUrlResponseDetails& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with this export job.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    ExportAssetToSignedUrlResponseDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this export
     * response.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ExportAssetToSignedUrlResponseDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signed URL for the export request.</p>
     */
    inline const Aws::String& GetSignedUrl() const { return m_signedUrl; }
    inline bool SignedUrlHasBeenSet() const { return m_signedUrlHasBeenSet; }
    template<typename SignedUrlT = Aws::String>
    void SetSignedUrl(SignedUrlT&& value) { m_signedUrlHasBeenSet = true; m_signedUrl = std::forward<SignedUrlT>(value); }
    template<typename SignedUrlT = Aws::String>
    ExportAssetToSignedUrlResponseDetails& WithSignedUrl(SignedUrlT&& value) { SetSignedUrl(std::forward<SignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the signed URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetSignedUrlExpiresAt() const { return m_signedUrlExpiresAt; }
    inline bool SignedUrlExpiresAtHasBeenSet() const { return m_signedUrlExpiresAtHasBeenSet; }
    template<typename SignedUrlExpiresAtT = Aws::Utils::DateTime>
    void SetSignedUrlExpiresAt(SignedUrlExpiresAtT&& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = std::forward<SignedUrlExpiresAtT>(value); }
    template<typename SignedUrlExpiresAtT = Aws::Utils::DateTime>
    ExportAssetToSignedUrlResponseDetails& WithSignedUrlExpiresAt(SignedUrlExpiresAtT&& value) { SetSignedUrlExpiresAt(std::forward<SignedUrlExpiresAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_signedUrl;
    bool m_signedUrlHasBeenSet = false;

    Aws::Utils::DateTime m_signedUrlExpiresAt{};
    bool m_signedUrlExpiresAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
