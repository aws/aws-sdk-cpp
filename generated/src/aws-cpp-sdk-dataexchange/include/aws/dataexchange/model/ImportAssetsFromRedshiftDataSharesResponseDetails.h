/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/RedshiftDataShareAssetSourceEntry.h>
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
   * <p>Details from an import from Amazon Redshift datashare response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetsFromRedshiftDataSharesResponseDetails">AWS
   * API Reference</a></p>
   */
  class ImportAssetsFromRedshiftDataSharesResponseDetails
  {
  public:
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesResponseDetails() = default;
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesResponseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ImportAssetsFromRedshiftDataSharesResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of Amazon Redshift datashare asset sources.</p>
     */
    inline const Aws::Vector<RedshiftDataShareAssetSourceEntry>& GetAssetSources() const { return m_assetSources; }
    inline bool AssetSourcesHasBeenSet() const { return m_assetSourcesHasBeenSet; }
    template<typename AssetSourcesT = Aws::Vector<RedshiftDataShareAssetSourceEntry>>
    void SetAssetSources(AssetSourcesT&& value) { m_assetSourcesHasBeenSet = true; m_assetSources = std::forward<AssetSourcesT>(value); }
    template<typename AssetSourcesT = Aws::Vector<RedshiftDataShareAssetSourceEntry>>
    ImportAssetsFromRedshiftDataSharesResponseDetails& WithAssetSources(AssetSourcesT&& value) { SetAssetSources(std::forward<AssetSourcesT>(value)); return *this;}
    template<typename AssetSourcesT = RedshiftDataShareAssetSourceEntry>
    ImportAssetsFromRedshiftDataSharesResponseDetails& AddAssetSources(AssetSourcesT&& value) { m_assetSourcesHasBeenSet = true; m_assetSources.emplace_back(std::forward<AssetSourcesT>(value)); return *this; }
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
    ImportAssetsFromRedshiftDataSharesResponseDetails& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this import job.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    ImportAssetsFromRedshiftDataSharesResponseDetails& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RedshiftDataShareAssetSourceEntry> m_assetSources;
    bool m_assetSourcesHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
