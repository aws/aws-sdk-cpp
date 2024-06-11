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
    AWS_FRAUDDETECTOR_API PutExternalModelRequest();

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
    inline const Aws::String& GetModelEndpoint() const{ return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    inline void SetModelEndpoint(const Aws::String& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = value; }
    inline void SetModelEndpoint(Aws::String&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::move(value); }
    inline void SetModelEndpoint(const char* value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint.assign(value); }
    inline PutExternalModelRequest& WithModelEndpoint(const Aws::String& value) { SetModelEndpoint(value); return *this;}
    inline PutExternalModelRequest& WithModelEndpoint(Aws::String&& value) { SetModelEndpoint(std::move(value)); return *this;}
    inline PutExternalModelRequest& WithModelEndpoint(const char* value) { SetModelEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the model.</p>
     */
    inline const ModelSource& GetModelSource() const{ return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(const ModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline void SetModelSource(ModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }
    inline PutExternalModelRequest& WithModelSource(const ModelSource& value) { SetModelSource(value); return *this;}
    inline PutExternalModelRequest& WithModelSource(ModelSource&& value) { SetModelSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used to invoke the model endpoint.</p>
     */
    inline const Aws::String& GetInvokeModelEndpointRoleArn() const{ return m_invokeModelEndpointRoleArn; }
    inline bool InvokeModelEndpointRoleArnHasBeenSet() const { return m_invokeModelEndpointRoleArnHasBeenSet; }
    inline void SetInvokeModelEndpointRoleArn(const Aws::String& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = value; }
    inline void SetInvokeModelEndpointRoleArn(Aws::String&& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = std::move(value); }
    inline void SetInvokeModelEndpointRoleArn(const char* value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn.assign(value); }
    inline PutExternalModelRequest& WithInvokeModelEndpointRoleArn(const Aws::String& value) { SetInvokeModelEndpointRoleArn(value); return *this;}
    inline PutExternalModelRequest& WithInvokeModelEndpointRoleArn(Aws::String&& value) { SetInvokeModelEndpointRoleArn(std::move(value)); return *this;}
    inline PutExternalModelRequest& WithInvokeModelEndpointRoleArn(const char* value) { SetInvokeModelEndpointRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint input configuration.</p>
     */
    inline const ModelInputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    inline void SetInputConfiguration(const ModelInputConfiguration& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = value; }
    inline void SetInputConfiguration(ModelInputConfiguration&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::move(value); }
    inline PutExternalModelRequest& WithInputConfiguration(const ModelInputConfiguration& value) { SetInputConfiguration(value); return *this;}
    inline PutExternalModelRequest& WithInputConfiguration(ModelInputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint output configuration.</p>
     */
    inline const ModelOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const ModelOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(ModelOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline PutExternalModelRequest& WithOutputConfiguration(const ModelOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline PutExternalModelRequest& WithOutputConfiguration(ModelOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model endpoint’s status in Amazon Fraud Detector.</p>
     */
    inline const ModelEndpointStatus& GetModelEndpointStatus() const{ return m_modelEndpointStatus; }
    inline bool ModelEndpointStatusHasBeenSet() const { return m_modelEndpointStatusHasBeenSet; }
    inline void SetModelEndpointStatus(const ModelEndpointStatus& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = value; }
    inline void SetModelEndpointStatus(ModelEndpointStatus&& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = std::move(value); }
    inline PutExternalModelRequest& WithModelEndpointStatus(const ModelEndpointStatus& value) { SetModelEndpointStatus(value); return *this;}
    inline PutExternalModelRequest& WithModelEndpointStatus(ModelEndpointStatus&& value) { SetModelEndpointStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutExternalModelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutExternalModelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutExternalModelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutExternalModelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    Aws::String m_invokeModelEndpointRoleArn;
    bool m_invokeModelEndpointRoleArnHasBeenSet = false;

    ModelInputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    ModelOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    ModelEndpointStatus m_modelEndpointStatus;
    bool m_modelEndpointStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
