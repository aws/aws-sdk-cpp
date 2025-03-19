/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelSource.h>
#include <aws/frauddetector/model/ModelInputConfiguration.h>
#include <aws/frauddetector/model/ModelOutputConfiguration.h>
#include <aws/frauddetector/model/ModelEndpointStatus.h>
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
  class PutExternalModelRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API PutExternalModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutExternalModel"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The model endpoints name.</p>
     */
    inline const Aws::String& GetModelEndpoint() const { return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    template<typename ModelEndpointT = Aws::String>
    void SetModelEndpoint(ModelEndpointT&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::forward<ModelEndpointT>(value); }
    template<typename ModelEndpointT = Aws::String>
    PutExternalModelRequest& WithModelEndpoint(ModelEndpointT&& value) { SetModelEndpoint(std::forward<ModelEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the model.</p>
     */
    inline ModelSource GetModelSource() const { return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(ModelSource value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline PutExternalModelRequest& WithModelSource(ModelSource value) { SetModelSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline const Aws::String& GetInvokeModelEndpointRoleArn() const { return m_invokeModelEndpointRoleArn; }
    inline bool InvokeModelEndpointRoleArnHasBeenSet() const { return m_invokeModelEndpointRoleArnHasBeenSet; }
    template<typename InvokeModelEndpointRoleArnT = Aws::String>
    void SetInvokeModelEndpointRoleArn(InvokeModelEndpointRoleArnT&& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = std::forward<InvokeModelEndpointRoleArnT>(value); }
    template<typename InvokeModelEndpointRoleArnT = Aws::String>
    PutExternalModelRequest& WithInvokeModelEndpointRoleArn(InvokeModelEndpointRoleArnT&& value) { SetInvokeModelEndpointRoleArn(std::forward<InvokeModelEndpointRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline const ModelInputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    template<typename InputConfigurationT = ModelInputConfiguration>
    void SetInputConfiguration(InputConfigurationT&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::forward<InputConfigurationT>(value); }
    template<typename InputConfigurationT = ModelInputConfiguration>
    PutExternalModelRequest& WithInputConfiguration(InputConfigurationT&& value) { SetInputConfiguration(std::forward<InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline const ModelOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = ModelOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = ModelOutputConfiguration>
    PutExternalModelRequest& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline ModelEndpointStatus GetModelEndpointStatus() const { return m_modelEndpointStatus; }
    inline bool ModelEndpointStatusHasBeenSet() const { return m_modelEndpointStatusHasBeenSet; }
    inline void SetModelEndpointStatus(ModelEndpointStatus value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = value; }
    inline PutExternalModelRequest& WithModelEndpointStatus(ModelEndpointStatus value) { SetModelEndpointStatus(value); return *this;}
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
    PutExternalModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutExternalModelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource{ModelSource::NOT_SET};
    bool m_modelSourceHasBeenSet = false;

    Aws::String m_invokeModelEndpointRoleArn;
    bool m_invokeModelEndpointRoleArnHasBeenSet = false;

    ModelInputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    ModelOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    ModelEndpointStatus m_modelEndpointStatus{ModelEndpointStatus::NOT_SET};
    bool m_modelEndpointStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
