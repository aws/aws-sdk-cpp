/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelTypeEnum.h>
#include <aws/frauddetector/model/ExternalEventsDetail.h>
#include <aws/frauddetector/model/IngestedEventsDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateModelVersionRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateModelVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelVersion"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The model ID.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    UpdateModelVersionRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline ModelTypeEnum GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelTypeEnum value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline UpdateModelVersionRequest& WithModelType(ModelTypeEnum value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version number.</p>
     */
    inline const Aws::String& GetMajorVersionNumber() const { return m_majorVersionNumber; }
    inline bool MajorVersionNumberHasBeenSet() const { return m_majorVersionNumberHasBeenSet; }
    template<typename MajorVersionNumberT = Aws::String>
    void SetMajorVersionNumber(MajorVersionNumberT&& value) { m_majorVersionNumberHasBeenSet = true; m_majorVersionNumber = std::forward<MajorVersionNumberT>(value); }
    template<typename MajorVersionNumberT = Aws::String>
    UpdateModelVersionRequest& WithMajorVersionNumber(MajorVersionNumberT&& value) { SetMajorVersionNumber(std::forward<MajorVersionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the external events data used for training the model version.
     * Required if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const { return m_externalEventsDetail; }
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    void SetExternalEventsDetail(ExternalEventsDetailT&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::forward<ExternalEventsDetailT>(value); }
    template<typename ExternalEventsDetailT = ExternalEventsDetail>
    UpdateModelVersionRequest& WithExternalEventsDetail(ExternalEventsDetailT&& value) { SetExternalEventsDetail(std::forward<ExternalEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the ingested event used for training the model version.
     * Required if your <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const { return m_ingestedEventsDetail; }
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    void SetIngestedEventsDetail(IngestedEventsDetailT&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::forward<IngestedEventsDetailT>(value); }
    template<typename IngestedEventsDetailT = IngestedEventsDetail>
    UpdateModelVersionRequest& WithIngestedEventsDetail(IngestedEventsDetailT&& value) { SetIngestedEventsDetail(std::forward<IngestedEventsDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UpdateModelVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UpdateModelVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType{ModelTypeEnum::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_majorVersionNumber;
    bool m_majorVersionNumberHasBeenSet = false;

    ExternalEventsDetail m_externalEventsDetail;
    bool m_externalEventsDetailHasBeenSet = false;

    IngestedEventsDetail m_ingestedEventsDetail;
    bool m_ingestedEventsDetailHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
