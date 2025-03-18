/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ExportServerSideEncryption.h>
#include <aws/dataexchange/model/AssetDestinationEntry.h>
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
   * <p>Details of the operation to be performed by the job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ExportAssetsToS3RequestDetails">AWS
   * API Reference</a></p>
   */
  class ExportAssetsToS3RequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API ExportAssetsToS3RequestDetails() = default;
    AWS_DATAEXCHANGE_API ExportAssetsToS3RequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ExportAssetsToS3RequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination for the asset.</p>
     */
    inline const Aws::Vector<AssetDestinationEntry>& GetAssetDestinations() const { return m_assetDestinations; }
    inline bool AssetDestinationsHasBeenSet() const { return m_assetDestinationsHasBeenSet; }
    template<typename AssetDestinationsT = Aws::Vector<AssetDestinationEntry>>
    void SetAssetDestinations(AssetDestinationsT&& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations = std::forward<AssetDestinationsT>(value); }
    template<typename AssetDestinationsT = Aws::Vector<AssetDestinationEntry>>
    ExportAssetsToS3RequestDetails& WithAssetDestinations(AssetDestinationsT&& value) { SetAssetDestinations(std::forward<AssetDestinationsT>(value)); return *this;}
    template<typename AssetDestinationsT = AssetDestinationEntry>
    ExportAssetsToS3RequestDetails& AddAssetDestinations(AssetDestinationsT&& value) { m_assetDestinationsHasBeenSet = true; m_assetDestinations.emplace_back(std::forward<AssetDestinationsT>(value)); return *this; }
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
    ExportAssetsToS3RequestDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption configuration for the export job.</p>
     */
    inline const ExportServerSideEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = ExportServerSideEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = ExportServerSideEncryption>
    ExportAssetsToS3RequestDetails& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this export
     * request.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ExportAssetsToS3RequestDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetDestinationEntry> m_assetDestinations;
    bool m_assetDestinationsHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    ExportServerSideEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
