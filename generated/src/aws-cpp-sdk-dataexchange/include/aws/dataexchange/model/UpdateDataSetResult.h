/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/Origin.h>
#include <aws/dataexchange/model/OriginDetails.h>
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
  class UpdateDataSetResult
  {
  public:
    AWS_DATAEXCHANGE_API UpdateDataSetResult();
    AWS_DATAEXCHANGE_API UpdateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API UpdateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the data set.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateDataSetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateDataSetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }
    inline void SetAssetType(const AssetType& value) { m_assetType = value; }
    inline void SetAssetType(AssetType&& value) { m_assetType = std::move(value); }
    inline UpdateDataSetResult& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}
    inline UpdateDataSetResult& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateDataSetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateDataSetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the data set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateDataSetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateDataSetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateDataSetResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateDataSetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateDataSetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateDataSetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }
    inline void SetOrigin(const Origin& value) { m_origin = value; }
    inline void SetOrigin(Origin&& value) { m_origin = std::move(value); }
    inline UpdateDataSetResult& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}
    inline UpdateDataSetResult& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline const OriginDetails& GetOriginDetails() const{ return m_originDetails; }
    inline void SetOriginDetails(const OriginDetails& value) { m_originDetails = value; }
    inline void SetOriginDetails(OriginDetails&& value) { m_originDetails = std::move(value); }
    inline UpdateDataSetResult& WithOriginDetails(const OriginDetails& value) { SetOriginDetails(value); return *this;}
    inline UpdateDataSetResult& WithOriginDetails(OriginDetails&& value) { SetOriginDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline void SetSourceId(const Aws::String& value) { m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceId.assign(value); }
    inline UpdateDataSetResult& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline UpdateDataSetResult& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateDataSetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateDataSetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDataSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDataSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDataSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    AssetType m_assetType;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_id;

    Aws::String m_name;

    Origin m_origin;

    OriginDetails m_originDetails;

    Aws::String m_sourceId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
