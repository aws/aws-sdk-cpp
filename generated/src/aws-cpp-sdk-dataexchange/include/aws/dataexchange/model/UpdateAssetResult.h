﻿/**
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
    AWS_DATAEXCHANGE_API UpdateAssetResult();
    AWS_DATAEXCHANGE_API UpdateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API UpdateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the asset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateAssetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateAssetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateAssetResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the asset.</p>
     */
    inline const AssetDetails& GetAssetDetails() const{ return m_assetDetails; }
    inline void SetAssetDetails(const AssetDetails& value) { m_assetDetails = value; }
    inline void SetAssetDetails(AssetDetails&& value) { m_assetDetails = std::move(value); }
    inline UpdateAssetResult& WithAssetDetails(const AssetDetails& value) { SetAssetDetails(value); return *this;}
    inline UpdateAssetResult& WithAssetDetails(AssetDetails&& value) { SetAssetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }
    inline void SetAssetType(const AssetType& value) { m_assetType = value; }
    inline void SetAssetType(AssetType&& value) { m_assetType = std::move(value); }
    inline UpdateAssetResult& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}
    inline UpdateAssetResult& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the asset was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateAssetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateAssetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set associated with this asset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }
    inline UpdateAssetResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline UpdateAssetResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline UpdateAssetResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the asset.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateAssetResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateAssetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateAssetResult& WithId(const char* value) { SetId(value); return *this;}
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateAssetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAssetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAssetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the revision associated with this asset.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionId.assign(value); }
    inline UpdateAssetResult& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline UpdateAssetResult& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline UpdateAssetResult& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset ID of the owned asset corresponding to the entitled asset being
     * viewed. This parameter is returned when an asset owner is viewing the entitled
     * copy of its owned asset.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline void SetSourceId(const Aws::String& value) { m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceId.assign(value); }
    inline UpdateAssetResult& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline UpdateAssetResult& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline UpdateAssetResult& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the asset was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateAssetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateAssetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAssetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAssetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAssetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    AssetDetails m_assetDetails;

    AssetType m_assetType;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_dataSetId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_revisionId;

    Aws::String m_sourceId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
