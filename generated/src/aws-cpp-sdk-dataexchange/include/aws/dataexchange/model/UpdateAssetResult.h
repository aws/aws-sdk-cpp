/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetDetails.h>
#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{
  class UpdateAssetResult
  {
  public:
    AWS_DATAEXCHANGE_API UpdateAssetResult() = default;
    AWS_DATAEXCHANGE_API UpdateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API UpdateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the asset.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateAssetResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the asset.</p>
     */
    inline const AssetDetails& GetAssetDetails() const { return m_assetDetails; }
    template<typename AssetDetailsT = AssetDetails>
    void SetAssetDetails(AssetDetailsT&& value) { m_assetDetailsHasBeenSet = true; m_assetDetails = std::forward<AssetDetailsT>(value); }
    template<typename AssetDetailsT = AssetDetails>
    UpdateAssetResult& WithAssetDetails(AssetDetailsT&& value) { SetAssetDetails(std::forward<AssetDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline AssetType GetAssetType() const { return m_assetType; }
    inline void SetAssetType(AssetType value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline UpdateAssetResult& WithAssetType(AssetType value) { SetAssetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateAssetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    UpdateAssetResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateAssetResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset. When importing from Amazon S3, the Amazon S3 object
     * key is used as the asset name. When exporting to Amazon S3, the asset name is
     * used as default target Amazon S3 object key. When importing from Amazon API
     * Gateway API, the API name is used as the asset name. When importing from Amazon
     * Redshift, the datashare name is used as the asset name. When importing from AWS
     * Lake Formation, the static values of "Database(s) included in the LF-tag
     * policy"- or "Table(s) included in LF-tag policy" are used as the asset name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAssetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    UpdateAssetResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    UpdateAssetResult& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateAssetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssetDetails m_assetDetails;
    bool m_assetDetailsHasBeenSet = false;

    AssetType m_assetType{AssetType::NOT_SET};
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
