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
    AWS_DATAEXCHANGE_API UpdateDataSetResult() = default;
    AWS_DATAEXCHANGE_API UpdateDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API UpdateDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the data set.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateDataSetResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset that is added to a data set.</p>
     */
    inline AssetType GetAssetType() const { return m_assetType; }
    inline void SetAssetType(AssetType value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline UpdateDataSetResult& WithAssetType(AssetType value) { SetAssetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the data set was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateDataSetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the data set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDataSetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the data set.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateDataSetResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data set.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataSetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline Origin GetOrigin() const { return m_origin; }
    inline void SetOrigin(Origin value) { m_originHasBeenSet = true; m_origin = value; }
    inline UpdateDataSetResult& WithOrigin(Origin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the origin of this data set is ENTITLED, includes the details for the
     * product on AWS Marketplace.</p>
     */
    inline const OriginDetails& GetOriginDetails() const { return m_originDetails; }
    template<typename OriginDetailsT = OriginDetails>
    void SetOriginDetails(OriginDetailsT&& value) { m_originDetailsHasBeenSet = true; m_originDetails = std::forward<OriginDetailsT>(value); }
    template<typename OriginDetailsT = OriginDetails>
    UpdateDataSetResult& WithOriginDetails(OriginDetailsT&& value) { SetOriginDetails(std::forward<OriginDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set ID of the owned data set corresponding to the entitled data set
     * being viewed. This parameter is returned when a data set owner is viewing the
     * entitled copy of its owned data set.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    UpdateDataSetResult& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the data set was last updated, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdateDataSetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssetType m_assetType{AssetType::NOT_SET};
    bool m_assetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Origin m_origin{Origin::NOT_SET};
    bool m_originHasBeenSet = false;

    OriginDetails m_originDetails;
    bool m_originDetailsHasBeenSet = false;

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
