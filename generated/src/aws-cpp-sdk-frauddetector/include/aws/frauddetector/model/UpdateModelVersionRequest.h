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
    AWS_FRAUDDETECTOR_API UpdateModelVersionRequest();

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
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline UpdateModelVersionRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline UpdateModelVersionRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline UpdateModelVersionRequest& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type.</p>
     */
    inline const ModelTypeEnum& GetModelType() const{ return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(const ModelTypeEnum& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline void SetModelType(ModelTypeEnum&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }
    inline UpdateModelVersionRequest& WithModelType(const ModelTypeEnum& value) { SetModelType(value); return *this;}
    inline UpdateModelVersionRequest& WithModelType(ModelTypeEnum&& value) { SetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version number.</p>
     */
    inline const Aws::String& GetMajorVersionNumber() const{ return m_majorVersionNumber; }
    inline bool MajorVersionNumberHasBeenSet() const { return m_majorVersionNumberHasBeenSet; }
    inline void SetMajorVersionNumber(const Aws::String& value) { m_majorVersionNumberHasBeenSet = true; m_majorVersionNumber = value; }
    inline void SetMajorVersionNumber(Aws::String&& value) { m_majorVersionNumberHasBeenSet = true; m_majorVersionNumber = std::move(value); }
    inline void SetMajorVersionNumber(const char* value) { m_majorVersionNumberHasBeenSet = true; m_majorVersionNumber.assign(value); }
    inline UpdateModelVersionRequest& WithMajorVersionNumber(const Aws::String& value) { SetMajorVersionNumber(value); return *this;}
    inline UpdateModelVersionRequest& WithMajorVersionNumber(Aws::String&& value) { SetMajorVersionNumber(std::move(value)); return *this;}
    inline UpdateModelVersionRequest& WithMajorVersionNumber(const char* value) { SetMajorVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the external events data used for training the model version.
     * Required if <code>trainingDataSource</code> is <code>EXTERNAL_EVENTS</code>.</p>
     */
    inline const ExternalEventsDetail& GetExternalEventsDetail() const{ return m_externalEventsDetail; }
    inline bool ExternalEventsDetailHasBeenSet() const { return m_externalEventsDetailHasBeenSet; }
    inline void SetExternalEventsDetail(const ExternalEventsDetail& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = value; }
    inline void SetExternalEventsDetail(ExternalEventsDetail&& value) { m_externalEventsDetailHasBeenSet = true; m_externalEventsDetail = std::move(value); }
    inline UpdateModelVersionRequest& WithExternalEventsDetail(const ExternalEventsDetail& value) { SetExternalEventsDetail(value); return *this;}
    inline UpdateModelVersionRequest& WithExternalEventsDetail(ExternalEventsDetail&& value) { SetExternalEventsDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the ingested event used for training the model version.
     * Required if your <code>trainingDataSource</code> is
     * <code>INGESTED_EVENTS</code>.</p>
     */
    inline const IngestedEventsDetail& GetIngestedEventsDetail() const{ return m_ingestedEventsDetail; }
    inline bool IngestedEventsDetailHasBeenSet() const { return m_ingestedEventsDetailHasBeenSet; }
    inline void SetIngestedEventsDetail(const IngestedEventsDetail& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = value; }
    inline void SetIngestedEventsDetail(IngestedEventsDetail&& value) { m_ingestedEventsDetailHasBeenSet = true; m_ingestedEventsDetail = std::move(value); }
    inline UpdateModelVersionRequest& WithIngestedEventsDetail(const IngestedEventsDetail& value) { SetIngestedEventsDetail(value); return *this;}
    inline UpdateModelVersionRequest& WithIngestedEventsDetail(IngestedEventsDetail&& value) { SetIngestedEventsDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UpdateModelVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdateModelVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateModelVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UpdateModelVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    ModelTypeEnum m_modelType;
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
