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
   * <p>The details in the response for an import request, including the signed URL
   * and other information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromSignedUrlResponseDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetFromSignedUrlResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails() = default;
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name for the asset associated with this import job.</p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    ImportAssetFromSignedUrlResponseDetails& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with this import job.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    ImportAssetFromSignedUrlResponseDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Base64-encoded Md5 hash for the asset, used to ensure the integrity of
     * the file at that location.</p>
     */
    inline const Aws::String& GetMd5Hash() const { return m_md5Hash; }
    inline bool Md5HashHasBeenSet() const { return m_md5HashHasBeenSet; }
    template<typename Md5HashT = Aws::String>
    void SetMd5Hash(Md5HashT&& value) { m_md5HashHasBeenSet = true; m_md5Hash = std::forward<Md5HashT>(value); }
    template<typename Md5HashT = Aws::String>
    ImportAssetFromSignedUrlResponseDetails& WithMd5Hash(Md5HashT&& value) { SetMd5Hash(std::forward<Md5HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this import
     * response.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ImportAssetFromSignedUrlResponseDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signed URL.</p>
     */
    inline const Aws::String& GetSignedUrl() const { return m_signedUrl; }
    inline bool SignedUrlHasBeenSet() const { return m_signedUrlHasBeenSet; }
    template<typename SignedUrlT = Aws::String>
    void SetSignedUrl(SignedUrlT&& value) { m_signedUrlHasBeenSet = true; m_signedUrl = std::forward<SignedUrlT>(value); }
    template<typename SignedUrlT = Aws::String>
    ImportAssetFromSignedUrlResponseDetails& WithSignedUrl(SignedUrlT&& value) { SetSignedUrl(std::forward<SignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date at which the signed URL expires, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetSignedUrlExpiresAt() const { return m_signedUrlExpiresAt; }
    inline bool SignedUrlExpiresAtHasBeenSet() const { return m_signedUrlExpiresAtHasBeenSet; }
    template<typename SignedUrlExpiresAtT = Aws::Utils::DateTime>
    void SetSignedUrlExpiresAt(SignedUrlExpiresAtT&& value) { m_signedUrlExpiresAtHasBeenSet = true; m_signedUrlExpiresAt = std::forward<SignedUrlExpiresAtT>(value); }
    template<typename SignedUrlExpiresAtT = Aws::Utils::DateTime>
    ImportAssetFromSignedUrlResponseDetails& WithSignedUrlExpiresAt(SignedUrlExpiresAtT&& value) { SetSignedUrlExpiresAt(std::forward<SignedUrlExpiresAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_md5Hash;
    bool m_md5HashHasBeenSet = false;

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
